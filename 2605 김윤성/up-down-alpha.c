#include <stdio.h>
#include <windows.h>

void game_TITLE();
void game_START();
void hangeul_key_onoff();		 

int main ()
{
	//인적사항
	unsigned short hakbun,trycount;
	char name[10];
	//컴퓨터와 사용자의 수
	short comnum,usernum;
	//반복문의 지속여부
	char EXIT,game_continue='Y';
	//저장 파일
	FILE *fp;
	fp=fopen("data.txt","a");
	srand(time(NULL));
	//화면크기,색 조절 및 타이틀 출력 
	do{ 
		game_TITLE();
		//파일 열기,추가 파일로 열기 
		FILE*fp;
		fp=fopen("data.txt","a");
		//사용자 입력
		printf("		   ◆◆사용자 입력◆◆\n");
		//인적 사항(학번,이름) 입력 받아, 파일에 저장 
		printf("[학번입력] ");
		scanf("%d",&hakbun);
		printf("[이름입력] ");
		hangeul_key_onoff();		//키보드 상태를 한글 자판으로 변경
		scanf("%s",name);
		
		
		fprintf(fp, "%d %s ", hakbun, name);
		
		
		Sleep(1000);
		//게임 모드 시작
		game_START();	
		//컴퓨터 수 선택
		comnum=rand()%51;
		//사용자 시도 횟수 및 게임종료변수 초기화
		trycount=0;
		EXIT='X'; 
		//게임시작
		do{
			//사용자의 입력, 입력 횟수 증가
			printf("숫자 입력[0~50] ");
			scanf("%d",&usernum); 
			trycount++;	
			//맞춘 경우
			if(comnum==usernum){
				printf("\t\t정답입니다. 찾은 수:%d/찾은 횟수:%d\n",comnum,trycount);
				fprintf(fp,"%d\n", trycount);
				
				Sleep (3000);
				EXIT='o';
			} 
			//못맞춘 경우
			else if (trycount<10){
				system("color 84"); Sleep(500);
				system("color 8f");
				if(comnum>usernum)
					printf("\t%d보다 큰 수 \n",usernum);
				else printf("\t%d보다 작은 수 \n",usernum);
			} 
			else{
				printf("\t\t시도 횟수 초과 @@\n");
				fprintf(fp,"%d\n",1000);
				EXIT='0';
			}
		} while(EXIT=='X');
		Sleep(1000);
		printf("\n 게임을 계속하시겠습니까?(y/n)");
		hangeul_key_onoff();
		game_continue=getch();
		system("cls");
		
		
	}while(game_continue!='N'&& game_continue!='n'); 
	
	return 0;
}

void game_TITLE()
{   system("mode con: lines=15 cols=60");
	system("title Up-Down Game");
	system("color 5f");
	
	printf("   **************************************************\n");
	printf("   *                   업다운게임                   *\n");
	printf("   **************************************************\n");
}
void game_START()
{
	system("mode con: lines=25 cols=70");
	system("color 8f");
	
	printf("┏------------------------------------------------┓\n");
	printf("┃                Up-Down Game Start              ┃\n");
	printf("┗------------------------------------------------┛\n");
	
}
void hangeul_key_onoff()
{
	keybd_event(VK_HANGEUL,0,0,0);
}

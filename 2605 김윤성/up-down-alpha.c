#include <stdio.h>
#include <windows.h>

void game_TITLE();
void game_START();
void hangeul_key_onoff();		 

int main ()
{
	//��������
	unsigned short hakbun,trycount;
	char name[10];
	//��ǻ�Ϳ� ������� ��
	short comnum,usernum;
	//�ݺ����� ���ӿ���
	char EXIT,game_continue='Y';
	//���� ����
	FILE *fp;
	fp=fopen("data.txt","a");
	srand(time(NULL));
	//ȭ��ũ��,�� ���� �� Ÿ��Ʋ ��� 
	do{ 
		game_TITLE();
		//���� ����,�߰� ���Ϸ� ���� 
		FILE*fp;
		fp=fopen("data.txt","a");
		//����� �Է�
		printf("		   �ߡ߻���� �Է¡ߡ�\n");
		//���� ����(�й�,�̸�) �Է� �޾�, ���Ͽ� ���� 
		printf("[�й��Է�] ");
		scanf("%d",&hakbun);
		printf("[�̸��Է�] ");
		hangeul_key_onoff();		//Ű���� ���¸� �ѱ� �������� ����
		scanf("%s",name);
		
		
		fprintf(fp, "%d %s ", hakbun, name);
		
		
		Sleep(1000);
		//���� ��� ����
		game_START();	
		//��ǻ�� �� ����
		comnum=rand()%51;
		//����� �õ� Ƚ�� �� �������ắ�� �ʱ�ȭ
		trycount=0;
		EXIT='X'; 
		//���ӽ���
		do{
			//������� �Է�, �Է� Ƚ�� ����
			printf("���� �Է�[0~50] ");
			scanf("%d",&usernum); 
			trycount++;	
			//���� ���
			if(comnum==usernum){
				printf("\t\t�����Դϴ�. ã�� ��:%d/ã�� Ƚ��:%d\n",comnum,trycount);
				fprintf(fp,"%d\n", trycount);
				
				Sleep (3000);
				EXIT='o';
			} 
			//������ ���
			else if (trycount<10){
				system("color 84"); Sleep(500);
				system("color 8f");
				if(comnum>usernum)
					printf("\t%d���� ū �� \n",usernum);
				else printf("\t%d���� ���� �� \n",usernum);
			} 
			else{
				printf("\t\t�õ� Ƚ�� �ʰ� @@\n");
				fprintf(fp,"%d\n",1000);
				EXIT='0';
			}
		} while(EXIT=='X');
		Sleep(1000);
		printf("\n ������ ����Ͻðڽ��ϱ�?(y/n)");
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
	printf("   *                   ���ٿ����                   *\n");
	printf("   **************************************************\n");
}
void game_START()
{
	system("mode con: lines=25 cols=70");
	system("color 8f");
	
	printf("��------------------------------------------------��\n");
	printf("��                Up-Down Game Start              ��\n");
	printf("��------------------------------------------------��\n");
	
}
void hangeul_key_onoff()
{
	keybd_event(VK_HANGEUL,0,0,0);
}

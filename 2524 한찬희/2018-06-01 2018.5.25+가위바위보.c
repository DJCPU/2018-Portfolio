//가위바위보.c 
#include <stdio.h>
#include <time.h>
int main()
{ 
	int myinput, cominput, myscore=0, comscore=0, counter=1;
	
	srand(time(NULL));
	while(counter<=5){
		printf("[메뉴] 1.가위 2.바위. 3.보     =>선택: ");
		scanf("%d", &myinput);
		
		cominput=rand()%3 + 1;
		
		if(myinput==1) printf("\n내 선택:가위");
		else if(myinput==2) printf("\n내 선택:바위");
		else if(myinput==3) printf("\n내 선택:보");
		
		if(cominput==1) printf("\n컴퓨터 선택:가위");
		else if(cominput==2) printf("\n컴퓨터 선택:바위");
		else if(cominput==3) printf("\n컴퓨터 선택:보");
		
		if(myinput==cominput) 
			printf("\t=>비겼다.\n");
		else if( (myinput==1 && cominput==3) || (myinput==2 && cominput==1) || (myinput==3 && cominput==2)   )
			myscore++, printf("\t=>내가 이겼다.\n");
		else
			comscore++, printf("\t=>컴퓨터가 이겼다.\n");
			
		printf("*********************************************\n");
		
		
		counter++;
	}
	
	printf("<결과> \n");
	printf("내점수: %d, 컴점수: %d \n",myscore, comscore);
	if(myscore>comscore) printf("내가 이겼다.\n");
	else if(myscore==comscore) printf("비겼다.\n");
	else printf("컴퓨터가 이겼다.\n");
	
	return 0; 
 } 

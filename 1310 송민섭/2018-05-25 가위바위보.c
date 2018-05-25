#include<stdio.h>

int main()
{
	int mychoice,comchoice,myscore,comscore,count=1;
	while(count<=5){	
	printf("[menu] 1.가위 2.바위 3.보 => 선택:");
	
	scanf("%d",&mychoice); 
	
	comchoice=rand()%3+1;
	
	if(mychoice==1)printf("내선택:가위");
	else if(mychoice==2)printf("내선택:바위");
	else if(mychoice==3)printf("내선택:보");
	if(comchoice==1)printf(", 컴선택:가위");
	else if(comchoice==2)printf(", 컴선택:바위");
	else if(comchoice==3)printf(", 컴선택:보");
	if(mychoice==comchoice)printf("\t=>비겼다\n");
	else if((mychoice==1&&comchoice==3)||(mychoice==2&&comchoice==1)||(mychoice==3&&comchoice==2))
		myscore++,printf("\t=>내가 이겼다\n");
	else comscore++,printf("\t=>컴이 이겼다\n");
	printf("**********************************\n");
	count++;

	
}
	return 0;
}

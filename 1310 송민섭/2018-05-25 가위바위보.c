#include<stdio.h>

int main()
{
	int mychoice,comchoice,myscore,comscore,count=1;
	while(count<=5){	
	printf("[menu] 1.���� 2.���� 3.�� => ����:");
	
	scanf("%d",&mychoice); 
	
	comchoice=rand()%3+1;
	
	if(mychoice==1)printf("������:����");
	else if(mychoice==2)printf("������:����");
	else if(mychoice==3)printf("������:��");
	if(comchoice==1)printf(", �ļ���:����");
	else if(comchoice==2)printf(", �ļ���:����");
	else if(comchoice==3)printf(", �ļ���:��");
	if(mychoice==comchoice)printf("\t=>����\n");
	else if((mychoice==1&&comchoice==3)||(mychoice==2&&comchoice==1)||(mychoice==3&&comchoice==2))
		myscore++,printf("\t=>���� �̰��\n");
	else comscore++,printf("\t=>���� �̰��\n");
	printf("**********************************\n");
	count++;

	
}
	return 0;
}

#include<stdio.h>
#include<time.h>

int main()
{
	int mychoice,comchoice,myscore=0,comscore=0,count=1;
	
	srand(time(NULL));
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
		{
		myscore++,printf("\t=>���� �̰��\n");}
	else {
	comscore++,printf("\t=>���� �̰��\n");}
	printf("**********************************\n");
	
	count++;

	
	}
	printf("<���>\n");
	printf("�������� %d, �������� %d\n",myscore,comscore);
	if (myscore>comscore) printf("���� �̰��.\n");
	else if(myscore==comscore) printf("����~\n");
	else printf("���� �̰��.");
	
	return 0;
}

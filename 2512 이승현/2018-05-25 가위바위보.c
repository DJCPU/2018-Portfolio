//����������.c
#include <stdio.h>
int main()
{
	int myInput, comInput, myScore=0, comScore=0, counter=1;
	
	while(counter<=5){
		printf("[�޴�] 1.���� 2.���� 3.�� => ���� : ");
		scanf("%d",&myInput); 
		
		comInput=rand()%3 + 1;

		if(myInput==1) printf("������:����");
		else if (myInput==2) printf("������:����");
		else if (myInput==3) printf("������:��");
		
		if(comInput==1) printf("�ļ���:����");
		else if (comInput==2) printf("�ļ���:����");
		else if (comInput==3) printf("�ļ���:��");
		
		
		counter++;
		
	}
	return 0;
}

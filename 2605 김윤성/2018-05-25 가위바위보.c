//����������.c 
#include <stdio.h>

int main()
{
	int myInput, comInput, myScore=0, comScore=0, counter=1;
	
	while(counter<=5){
		printf("[�޴�] 1.���� 2.���� 3.��  => ���� : ");
		scanf("%d",&myInput);
		
		comInput=rand()%3 + 1;
	
		if(myInput==1) printf("������:����");
		else if(myInput==2) printf("������:����");
		else if(myInput==3) printf("������:��");
		
		if(comInput==1) printf(", com����:����");
		else if(comInput==2) printf(", com����:����");
		else if(comInput==3) printf(", com����:��");
		
		if(myInput==comInput) 
			printf("\t=>����\n");
		else if((myInput==1 && comInput==3) || (myInput==2 && comInput==1) || (myInput==3 && comInput==2))
			myScore++, printf("\t=>���� �̰��\n"); 
		else
			comScore++, printf("\t=>com�� �̰��\n"); 
		
		printf("***********************************\n");
		
		counter++;
	}
	
	
	return 0;
}

#include <stdio.h>
int main()
{
	int myInput, comInput, myScore=0,comScore=0, counter=0;
	
	while(counter<=5){
		printf("[�޴�] 1.���� 2.���� 3.��   => ���� :");
		scanf("%d",&myInput);
		
		comInput=rand();
		if(myInput==1) printf("������:����");
		else if(myInput==2) printf("������:����");
		else if(myInput==3) printf("������:��");
		
		if(comInput==1) printf("������:����");
		else if(comInput==2) printf("������:����");
		else if(comInput==3) printf("������:��");
		
		if(myInput==comInput) printf("\t=>����\n");	
		else if((myInput==1 && comInput==3) || (myInput==2 && comInput==1) || (myInput==3 && comInput==2))
			myScore++, printf("\t=>���� �̰��\n"); 
		else if((myInput==3 && comInput==1) || (myInput==1 && comInput==2) || (myInput==2 && comInput==3))
			comScore++, printf("\t=>���� �̰��");
		
			printf("************************\n");
								
		counter++;
	}
	return 0;
}

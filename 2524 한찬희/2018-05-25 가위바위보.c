//����������.c 
#include <stdio.h>
int main()
{ 
	int myinput, cominput, myscore=0, comscore=0, counter=1;
	
	while(counter<=5){
		printf("[�޴�] 1.���� 2.����. 3.��     =>����: ");
		scanf("%d", &myinput);
		
		cominput=rand()%3 + 1;
		
		if(myinput==1) printf("\n�� ����:����");
		else if(myinput==2) printf("\n�� ����:����");
		else if(myinput==3) printf("\n�� ����:��");
		
		if(cominput==1) printf("\n��ǻ�� ����:����");
		else if(cominput==2) printf("\n��ǻ�� ����:����");
		else if(cominput==3) printf("\n��ǻ�� ����:��");
		
		if(myinput==cominput) 
			printf("\t=>����.\n");
		else if( (myinput==1 && cominput==3) || (myinput==2 && cominput==1) || (myinput==3 && cominput==2)   )
			myscore++, printf("\t=>���� �̰��.\n");
		else
			comscore++, printf("\t=>��ǻ�Ͱ� �̰��.\n");
			
		printf("*********************************************\n");
		
		
		counter++;
	}
	
	return 0; 
 } 

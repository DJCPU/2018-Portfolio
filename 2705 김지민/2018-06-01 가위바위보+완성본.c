#include <stdio.h>
#include <time.h>
int main()
{
	
	int myinput, cominput, myscore=0, comscore=0, counter=1;
	
	srand(time(NULL));
	
	

	while(counter<=5){
		printf("[�޴�]1.���� 2.���� 3.��      => ���� : ");
		scanf("%d", &myinput);
		
		cominput=rand()%3 +1;
		
		if(myinput==1) printf("������:����");
		else if(myinput==2) printf("������:����");
		else if(myinput==3) printf("������:��"); 
		
		if(cominput==1) printf(", �ļ���:����");
		else if(cominput==2) printf(", �ļ���:����");
		else if(cominput==3) printf(", �ļ���:��"); 
	
		if(myinput==cominput)
			printf ("\t=>����\n");
		else if( (myinput==1 && cominput==3) || (myinput==2 && cominput==1) || (myinput==3 && cominput==2) )
			myscore++,  printf("\t=> ���� �̰��\n");
		else 
			comscore++, printf("\t=> ���� �̰��\n");
		
		printf("*********************************\n");
		
		
		
		
		
				
	
		counter++; 
	}
	
	
	
	
	
	printf("<���>\n");
	printf("������ :%d  , ������:%d\n ",myscore,comscore);
	if(myscore>comscore) 
		printf ("���� �̰��\n");
	else if(myscore==comscore)
		printf ("����\n");
	else if(myscore<comscore)
		printf ("���� �̰��\n");
		
	
	
	
	
	
	//Rem Mazi Tensi Re:zero kara hazimeru isekai sekatu
	
	return 0;
}


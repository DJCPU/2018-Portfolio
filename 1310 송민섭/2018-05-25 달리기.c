#include<stdio.h>


int main(){

	float sec,sum=0;
	int i;	 	
	for(i=1;i<4;i++)
	{
		printf("100M �޸��� �� �Է�:");
		scanf("%f",&sec);
		
		sum=sum+sec;
		
		if(sec<10.0){
			printf("�ݸ޴�\n");
		}
		else if(sec<15.0){
			printf("���޴�\n");
		}
		else if(sec<20.0){
			printf("���޴�\n");
		}
		else{
			printf("���߾�\n");
		}
	}
printf("******************************\n��� �ð�:%.2f",sum/3.0);
return 0;
} 

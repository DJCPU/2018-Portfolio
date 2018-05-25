#include<stdio.h>


int main(){

	float sec,sum=0;
	int i;	 	
	for(i=1;i<4;i++)
	{
		printf("100M 달리기 초 입력:");
		scanf("%f",&sec);
		
		sum=sum+sec;
		
		if(sec<10.0){
			printf("금메달\n");
		}
		else if(sec<15.0){
			printf("은메달\n");
		}
		else if(sec<20.0){
			printf("동메달\n");
		}
		else{
			printf("잘했어\n");
		}
	}
printf("******************************\n평균 시간:%.2f",sum/3.0);
return 0;
} 

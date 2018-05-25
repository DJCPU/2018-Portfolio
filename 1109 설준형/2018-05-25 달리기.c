#include  <stdio.h>

int main()
{
	float second, sum=0;
	int count=1;
	
	while(count<=3){
	
		printf("100m 달리기 걸리는 시간은? :");
		scanf("%f", &second) ;
		
		sum=sum+second;
		
		if (second<10.0){
			printf("금메달입니다\n");
		} else if (second<15.0) {
			printf("은메달입니다\n");
		} else if (second<20.0) {
			printf("동메달입니다\n");
		} else{
			printf("잘했어\n");
		}
		count+=1;
	}

	printf("*******************************\n");
	printf("평균 시간: %.1f", sum/3.0);
return 0; 
}


/*
	Created At: 2018.05.25
	Author: 이은학(return0927)
	
	Content: 2018.05.25 수업 참여자료 
*/

#include <stdio.h>

int main() {
	float second, sum=0;
	int count=1;
	
	while(count <= 3) {
		printf("100m 달린 시간: ");
		scanf("%f", &second);
		
		sum = sum + second; // Alt. sum += second;
		
		if(second < 10.0) printf("금메달\n");
		else if(second < 15.0) printf("은메달\n");
		else if(second < 20.0) printf("동메달\n");
		else printf("잘했어\n");
		
		count++;
	}
	
	printf("**********************\n");
	printf("평균시간: %.2f", sum/3.0);
	
	return 0;
}

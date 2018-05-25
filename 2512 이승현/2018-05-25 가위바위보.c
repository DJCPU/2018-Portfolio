//가위바위보.c
#include <stdio.h>
int main()
{
	int myInput, comInput, myScore=0, comScore=0, counter=1;
	
	while(counter<=5){
		printf("[메뉴] 1.가위 2.바위 3.보 => 선택 : ");
		scanf("%d",&myInput); 
		
		comInput=rand()%3 + 1;

		if(myInput==1) printf("내선택:가위");
		else if (myInput==2) printf("내선택:바위");
		else if (myInput==3) printf("내선택:보");
		
		if(comInput==1) printf("컴선택:가위");
		else if (comInput==2) printf("컴선택:바위");
		else if (comInput==3) printf("컴선택:보");
		
		
		counter++;
		
	}
	return 0;
}

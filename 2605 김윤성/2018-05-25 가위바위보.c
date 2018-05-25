//가위바위보.c 
#include <stdio.h>

int main()
{
	int myInput, comInput, myScore=0, comScore=0, counter=1;
	
	while(counter<=5){
		printf("[메뉴] 1.가위 2.바위 3.보  => 선택 : ");
		scanf("%d",&myInput);
		
		comInput=rand()%3 + 1;
	
		if(myInput==1) printf("내선택:가위");
		else if(myInput==2) printf("내선택:바위");
		else if(myInput==3) printf("내선택:보");
		
		if(comInput==1) printf(", com선택:가위");
		else if(comInput==2) printf(", com선택:바위");
		else if(comInput==3) printf(", com선택:보");
		
		if(myInput==comInput) 
			printf("\t=>비겼다\n");
		else if((myInput==1 && comInput==3) || (myInput==2 && comInput==1) || (myInput==3 && comInput==2))
			myScore++, printf("\t=>내가 이겼다\n"); 
		else
			comScore++, printf("\t=>com이 이겼다\n"); 
		
		printf("***********************************\n");
		
		counter++;
	}
	
	
	return 0;
}

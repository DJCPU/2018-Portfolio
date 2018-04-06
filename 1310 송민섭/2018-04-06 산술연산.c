#include<stdio.h>

int main()
{
	int x,y;
	
	printf("x 입력해 ");
	scanf("%d",&x);
	printf("y 입력해 ");
	scanf("%d",&y);
	 
	printf("%d+%d=%d\n",x,y,x+y);
	printf("%d-%d=%d\n",x,y,x-y);
	printf("%d*%d=%d\n",x,y,x*y);
	printf("%d/%d=%d\n",x,y,x/y);
	printf("%d%%d=%d\n",x,y,x%y);
	 
	
	return 0;
 }  

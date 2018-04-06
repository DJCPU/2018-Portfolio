#include <stdio.h>

int main()
{
	int x,y;	//x(첫수) y(두수) 
	
	printf("x입력:");	scanf("%d",&x);
	printf("y입력:");	scanf("%d",&y); 

	printf("%d+%d=%d\n",x,y,x+y);
	printf("%d-%d=%d\n",x,y,x-y);
	printf("%d*%d=%d\n",x,y,x*y);
	printf("%d/%d=%d\n",x,y,x/y);
	printf("%d%%d=%d\n",x,y,x+y);
		

	return 0;
}

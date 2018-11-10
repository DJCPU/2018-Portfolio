//구구단.c 
#include <stdio.h>
int main()
{
	int i, dan=5;
	
	for(dan=2; dan<=9; dan++){
		printf("<%d단>\n", dan);
		for(i=1; i<=9; i++ )  {
			printf("%d*%d=%d\n",dan,i,dan*i);
		}
		printf("\n");
		getch();
}
	return 0; 
 } 

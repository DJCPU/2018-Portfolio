#include <stdio.h> 	 

int main()
{
	int x,y,l,s;		//x:���� y:���� l:�ѷ� s:���� 
	
	while(1) {
		
		printf("<�Է�>\n");
		printf("x�Է� : ");    scanf("%d",&x);
		printf("y�Է� : ");    scanf("%d",&y);
		
		l=2*(x+y);
		s=x*y;
		
		printf("�ѷ� : %d,���� : %d",l,s);
	}
	return 0;	
} 

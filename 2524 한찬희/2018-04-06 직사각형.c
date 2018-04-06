#include <stdio.h>

int main()
{
	int x,y,l,s; 	//x(가로) y(세로) l(둘레) s(넓이) 
	
	
	while(1){
	
		printf("\n<입력>");
		printf("\n가로입력:");    
		scanf("%d",&x);
		printf("세로입력:");
		scanf("%d",&y);
		
		l=(x+y)*2;
		s=x*y;
		
		printf("둘레:%d",l);
		printf("\n넓이:%d",s);
		
}
	return 0;
}

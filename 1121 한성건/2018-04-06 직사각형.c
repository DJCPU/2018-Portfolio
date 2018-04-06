#include <stdio.h> 

int main() 
{
    int x,y,l,s;	//x(가로) y(세로) L(둘레) s(넓이)
	
	while(1){
		printf("<입력>\n");
		printf("x입력 : ");    scanf("%d",&x);
		printf("y입력 : ");    scanf("%d",&y);
		
		l=(x+y)*2;
		s=x*y;
		
		printf("둘레:%d, 넓이:%d",l,s);
	}
	
    return 0;
}

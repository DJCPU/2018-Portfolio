#include <stdio.h> 

int main() 
{
    int x,y,l,s;	//x(����) y(����) L(�ѷ�) s(����)
	
	while(1){
		printf("<�Է�>\n");
		printf("x�Է� : ");    scanf("%d",&x);
		printf("y�Է� : ");    scanf("%d",&y);
		
		l=(x+y)*2;
		s=x*y;
		
		printf("�ѷ�:%d, ����:%d",l,s);
	}
	
    return 0;
}

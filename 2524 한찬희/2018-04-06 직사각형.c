#include <stdio.h>

int main()
{
	int x,y,l,s; 	//x(����) y(����) l(�ѷ�) s(����) 
	
	
	while(1){
	
		printf("\n<�Է�>");
		printf("\n�����Է�:");    
		scanf("%d",&x);
		printf("�����Է�:");
		scanf("%d",&y);
		
		l=(x+y)*2;
		s=x*y;
		
		printf("�ѷ�:%d",l);
		printf("\n����:%d",s);
		
}
	return 0;
}

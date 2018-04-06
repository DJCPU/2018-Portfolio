#include <stdio.h>
#include <windows.h>

int main() {
	int x, y, l, s;		// Kwargs | x: 가로, y:세로, l: 둘레, s: 면적
	
	while(1) { // 무한히 반복 
		system("cls");
		printf("<입력>\n");
		
		printf("x입력 : ");	scanf("%d", &x);
		printf("y입력 : ");	scanf("%d", &y);
		
		l = (x+y)*2;
		s = x*y;
		
		printf("\n둘레 : %d, 면적 : %d\n\n", l, s);
	}
	
	return 0;
}

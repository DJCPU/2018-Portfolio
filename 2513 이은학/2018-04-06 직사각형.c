#include <stdio.h>
#include <windows.h>

int main() {
	int x, y, l, s;		// Kwargs | x: ����, y:����, l: �ѷ�, s: ����
	
	while(1) { // ������ �ݺ� 
		system("cls");
		printf("<�Է�>\n");
		
		printf("x�Է� : ");	scanf("%d", &x);
		printf("y�Է� : ");	scanf("%d", &y);
		
		l = (x+y)*2;
		s = x*y;
		
		printf("\n�ѷ� : %d, ���� : %d\n\n", l, s);
	}
	
	return 0;
}

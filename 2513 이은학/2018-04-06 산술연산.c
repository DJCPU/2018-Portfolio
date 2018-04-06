#include <stdio.h>

int main() {
	int x, y; 		// ::kwargs | x: , y: ;
	
	printf("x입력 : "); scanf("%d", &x);
	printf("y입력 : "); scanf("%d", &y);
	
	printf("%d+%d=%d\n", x, y, x+y);
	printf("%d-%d=%d\n", x, y, x-y);
	printf("%d*%d=%d\n", x, y, x*y);
	printf("%d/%d=%f\n", x, y, (float)x/(float)y);
	printf("%d%%%d=%d\n", x, y, x%y);
	
	return 0;
}

//구구단2.c 
#include <stdio.h>
int main() {
	int i, dan;
	for(dan=2; dan<=9; dan++) {
			printf("<%d단> \t",dan,i,dan*i);
		}
		printf("\n");
	for(i=1; i<=9; i++) {
		for(dan=2; dan<=9; dan++) {
			printf("%d*%d=%d \t",dan,i,dan*i);
		}
	printf("\n");
	getch();
}
	return 0;
}

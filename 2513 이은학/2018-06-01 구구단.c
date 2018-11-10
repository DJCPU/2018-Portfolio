/*
	Created At: 2018.06.01 19:57 KST (UTC+9:00)
	Author: R3turn-Dev (a.k.a. return0927)
	
	Objective: 구구단
*/
#include <stdio.h>
#define size 10

int main() {
	int i, dan;
	
	for(dan=2; dan<=size; dan++) {
		printf(" [ %d단 ]\n", dan);
		for(i=1; i<=size; i++) {
			printf("  %d x %d = %d\n", dan, i, dan*i);										
		}
		printf("\n");
		getch();
	}
	
	return 0;
}

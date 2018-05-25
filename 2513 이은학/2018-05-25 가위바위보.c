#include <stdio.h>

int table[5] = {1, -1, 0, 1, -1};


int main() {
	int scr_user=0, scr_cpu=0, sel_user, sel_cpu, count=1;
	int result;
	
	while(count <= 5) {
		printf("[메뉴] 1.가위 2.바위 3.보    => ");
		scanf("%d", &sel_user);
		
		sel_cpu = rand() % 3;
		
		switch(sel_user) {
			case 0: printf("Me: S\t"); break;
			case 1: printf("Me: R\t"); break;
			case 2: printf("Me: P\t"); break;
			default: printf("Me: ?\t");
		}
		
		switch(sel_cpu) {
			case 0: printf("CPU: S\t\t"); break;
			case 1: printf("CPU: R\t\t"); break;
			case 2: printf("CPU: P\t\t"); break;
			default: printf("CPU: ?\t\t");
		}
		
		result = table[sel_user-sel_cpu+2] + 1;
		
		switch(result) {
			case 0: printf("LOST\n"); break;
			case 1: printf("DRAW\n"); break;
			case 2: printf("WIN\n"); break;
			default: printf("NOP\n");
		}
		
		count++;
		printf("*********************************************\n");
	}
	
	return 0;
}

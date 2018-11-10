#include <stdio.h>
#include <sys/time.h>

int table[5] = {1, -1, 0, 1, -1};
struct timeval tv;


int main() {
	int scr_user=0, scr_cpu=0, sel_user, sel_cpu, count=1;
	int result;
	
	while(count <= 5) {
		printf("[메뉴] 1.가위 2.바위 3.보    => ");
		scanf("%d", &sel_user);
		
		gettimeofday(&tv, NULL);
		srand(tv.tv_usec);
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
			case 0: printf("LOST\n"); scr_cpu++; break;
			case 1: printf("DRAW\n"); break;
			case 2: printf("WIN\n"); scr_user++; break;
			default: printf("NOP\n");
		}
		
		count += 1;
	}
	
	printf("<결과>\n");
	printf("Me %d : %d CPU\n", scr_user, scr_cpu);
	
	if(scr_user > scr_cpu) 			printf("USER");
	else if(scr_user < scr_cpu) 	printf("CPU");
	else 							printf("DRAW");
	
	return 0;
}

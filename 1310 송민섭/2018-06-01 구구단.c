#include<stdio.h>
int main(){
	int i,dan;
	
	for (dan=2;dan<=9;dan++){
	printf("<%d´Ü>\n",dan);
	for(i=1;i<=9;i++){
		printf("%d*%d=%02d\n",dan,i,i*dan);
	}
	printf("\n");
	getch();

}
	return 0;
}

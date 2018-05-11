//입력받은 수가 6의 배수이면, "6의 배수"라고 출력 
//그렇지 않으면 "NO" 
//6의배수: 2로 나눈 나머지가 0이고, 3으로 나눈 나머지가 0 
/*
<절차> 
 1.변수 선언 : input, mod2, mod3 
 2. inpiut 입력 받기 : scanf() 
 3. mod2= input을 2로 나눈 나머지 /mod3= input을 3으로 나눈 나머지  
 4. if(mod2==0 && mod3==0) "6의 배수" 출력 
 5.파일이름: 6의 배수.c 
*/



#include <stdio.h>

int main()
{
	int input, mod2, mod3, i;
	
	for(i=1; i<=5; i++){
	
		printf("정수 입력:");
		scanf("%d",&input);
		
		mod2=input%2;
		mod3=input%3;
		if(mod2==0 && mod3==0) printf("6의 배수 \n");
		if(mod2!=0 && mod3!=0) printf("NO\n");
		if(mod2==0 && mod3!=0) printf("NO\n");
		if(mod2!=0 && mod3==0) printf("NO\n");
			}
	return 0;
}

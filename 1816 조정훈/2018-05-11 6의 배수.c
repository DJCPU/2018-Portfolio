//입력받은 수가 6의 배수이면, "6의 배수"라고 출력
//그렇지 않으면 "No"
//6의 배수 : 2로 나눈 나머지가 0이고, 3으로 나눈 나머지가 0
/*
<절차>
1.변수선언 :input, mod2, mod3
2. input 입력 받기 : scanf() 
3. mod2<-input을2로 나눈 나머지 / mod3<-input을 3으로 나눈 나머지
4. if(mod2==0 && mod3==0 
5.파일 이름 : 6의 배수.c 
*/
#include <stdio.h>

int main()
{ 
	int input, mod2, mod3;
	
	printf("정수 입력 : ");
	scanf("%d",&input );
	
	mod2=input%2;
	
	if(mod2==0 && mod3==0) printf("6의 배수") ;
	return 0;
	
}

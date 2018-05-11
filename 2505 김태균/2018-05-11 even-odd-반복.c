//입력받은 수가 짝수인지 홀수인지 알아내는 프로그램
//짝수:2의 배수:2로 나눈 나머지가 0인수
//홀수:2로 나눈 나머지가 1인수 : 2로 나는 나머지가 0이 아닌 수
/*


<절차>
1. 변수 선언(tg, mod 정수형변수)
2. tg값을 입력( scanf )
3. tg를 2로 나눈 나머지(%)계산하여 mod에 할당
4. mod가 0이면, "짝수"라고 출력
5. mod가 1이면, "홀수"라고 출력
6. 파일이름: even-odd.c
*/
#include <stdio.h>

int main()
{
int tg, mod, i;

for(i=1; i<=10; i++){
printf("정수 입력 : ");
scanf("%d",&tg);

mod=tg%2;
if(mod==0) printf("짝수\n");
if(mod==1) prinff("홀수\n");
}
return 0;

}

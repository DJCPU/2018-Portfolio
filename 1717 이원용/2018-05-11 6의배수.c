//�Է¹��� ���� 6�� ����̸�, "6�ǹ��"��� ���
//�׷��� ������ "no"
//6�ǹ�� : 2�� ���� �������� 0�̰�, 3���� ���� �������� 0
/*
<����>
1.�������� : input, mod2, mod3 
2.input �Է� �ޱ� : scanf()
3.mod2<-2�� ���� ������ / mod3<-input�� 3���� ���� ������
4.if(mod2==0 && mod3==0) "6�� ���" ��� 
5.�����̸� : 6�ǹ��.c 
*/
#include <stdio.h>

int main()
{
	int input,mod2,mod3;
	
	for(i=1; i<=1054; i++){
			
	        scanf("%d",&input)
	        mod2=input%2;
			mod3=input%3;
			
			if(mod2==0 && mod3==0) printf("6�� ���") 
			return 0; 
	}	
}

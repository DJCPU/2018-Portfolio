//�Է¹��� ���� 6�� ����̸�, "6�� ���"��� ��� 
//�׷��� ������ "NO" 
//6�ǹ��: 2�� ���� �������� 0�̰�, 3���� ���� �������� 0 
/*
<����> 
 1.���� ���� : input, mod2, mod3 
 2. inpiut �Է� �ޱ� : scanf() 
 3. mod2= input�� 2�� ���� ������ /mod3= input�� 3���� ���� ������  
 4. if(mod2==0 && mod3==0) "6�� ���" ��� 
 5.�����̸�: 6�� ���.c 
*/



#include <stdio.h>

int main()
{
	int input, mod2, mod3, i;
	
	for(i=1; i<=5; i++){
	
		printf("���� �Է�:");
		scanf("%d",&input);
		
		mod2=input%2;
		mod3=input%3;
		if(mod2==0 && mod3==0) printf("6�� ��� \n");
		if(mod2!=0 && mod3!=0) printf("NO\n");
		if(mod2==0 && mod3!=0) printf("NO\n");
		if(mod2!=0 && mod3==0) printf("NO\n");
			}
	return 0;
}

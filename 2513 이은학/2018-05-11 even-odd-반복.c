// Created At: 2018-05-11 KST 20:10
// Author: return0927 ������ 

// �Է¹��� ���� ¦������ Ȧ������ �˾Ƴ��� ���α׷�.
// ¦��: 2�� ���: 	2�� ���� �������� 0�� ��
// Ȧ��: 			2�� ���� �������� 1�� ��	2�� ���� �������� 0�� �ƴ� �� 
/*
	����
		1. ���� ���� (kwargs| tg: integer, mod: integer)
		2. tg�� �Է¹ޱ�(scanf)
		3. tg�� 2�� ���� ������(%) ����Ͽ� mod�� ����
		4. mod�� 0�̸� `¦��`��� ���
		5. mod�� 1�̸�, `Ȧ��`��� ��� 
		
	���� �̸�: even-odd.c 
*/
#include <stdio.h>


int main() {
	int tg, mod, i;
	
	for(i=1; i<=10; i++) {
		printf("���� �Է�: ");
		scanf("%d", &tg);
		
		mod = tg % 2;
		
		// Method 1
		if(mod)	printf("Ȧ�� ");
		else	printf("¦�� ");
		
	/*	// Method 2
		if(mod == 0)	printf("¦�� ");
		if(mod == 1)	printf("Ȧ�� ");
		
		// Method 3
		if(mod == 0)	printf("¦��\n");
		else			printf("Ȧ��\n");
	*/ }
	
	return 0;
}

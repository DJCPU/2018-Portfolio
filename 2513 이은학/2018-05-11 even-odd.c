// Created At: 2018-05-11 KST 19:39
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
	int tg, mod;
	
	printf("���� �Է�: ");
	scanf("%d", &tg);
	
	mod = tg % 2;
	
	// Method 1
	if(mod)	printf("Ȧ��\n");
	else	printf("¦��\n");
	
	// Method 2
	if(mod == 0)	printf("¦��\n");
	if(mod == 1)	printf("Ȧ��\n");
	
	// Method 3
	if(mod == 0)	printf("¦��\n");
	else			printf("Ȧ��\n");
	
	
	return 0;
}

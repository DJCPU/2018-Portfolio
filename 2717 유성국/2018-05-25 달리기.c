#include <stdio.h> 
int main()
{
	float second, sum=0;
	int count=1;
	
	while(count<=3){
	
		printf("100m �޸��� �ɸ� �ð�: ");
		scanf("%f", &second);
		
		sum=sum+second;
		
		if(second < 10.0)
		{printf ("�ݸ޴�\n");} 
		else if (second < 15.0)
		{printf("���޴�\n");} 
		else if (second < 20.0)
		{printf ("���޴�\n");} 
		else 
		{printf("���߾�\n");}
	count++;
	}
	
	printf("************************************************************\n");
	printf("��սð� : %.2f", sum/3.0);
	return 0;
}







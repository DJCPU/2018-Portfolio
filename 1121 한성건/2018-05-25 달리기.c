#include <stdio.h>


int main()
{
    float second, sum=0;
    int count=1;
    
    while(count<4){
	
	    printf("100MM �޸��� �ɸ� �ð�");
	    scanf("%f", &second); 
	    
	    
	    sum=sum+second;
	    
	    if(second < 10.0)
	   {
		    printf("�ݸ޴�\n"); 
	   } else if(second < 15.0) {
	        printf("���޴�\n");
	   } else if(second < 20.0) {
	        printf("���޴�\n");
	   } else {
	        printf("���߾�\n") ;
	   }
       count++;
	   
    }
       
          
   printf("***********************************\n");
   printf("��� �ð� : %.1f",sum/3.0);
    return 0;


}


	

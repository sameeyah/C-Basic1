#include <stdio.h>

int main()
{
   int result_a, result_b;

   printf("2�l�̓_������͂��Ă��������B\n");

   printf("A����̓_���́H");

   scanf("%d",&result_a);

   printf("B����̓_���́H");

   scanf("%d",&result_b);

   if(result_a == result_b){ 
	printf("A�����B����͓��_�ł��B\n");
   }
   else if(result_a > result_b){  
	printf("A�����B������������_�ł����B\n");
   }
   else{  
	printf("B�����A������������_�ł����B\n");
   }
  
   return 0;
}
#include <stdio.h>

int main()
{
   int item_price, sum1, sum2, sum, item_number, credit, debit; 

   printf("���܂�̐Ŕ��P���́H");

   scanf("%d",&item_price);

   sum = item_price*1.08;  

   printf("���܂�̐ō��P����%d�~�ł��B\n", sum);
 
   printf("���܂���������܂����H");

   scanf("%d",&item_number);
   
   sum1 = sum*item_number;

   printf("����܂�̐Ŕ��P���́H");

   scanf("%d",&item_price);

   sum = item_price*1.08;  

   printf("����܂�̐ō��P����%d�~�ł��B\n", sum);
 
   printf("����܂���������܂����H");

   scanf("%d",&item_number);

   sum2 = sum*item_number;

   sum = sum1+sum2;

   printf("���v���z��%d�~�ł��B\n", sum);

   if(sum <= 1000){ 
	credit = 1000 - sum;
        printf("�w���\�B�����%d�~�ł��B\n",credit);
   }
   else{  
        debit = sum - 1000;
	printf("��������%d�~�s�����Ă��܂��B\n", debit);
   }

   return 0;
}
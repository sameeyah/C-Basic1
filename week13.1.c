#include <stdio.h>

int main()
{
   int year=1;
   double capital,interest, withdraw;

   printf("�����͉��N��ɒ�����܂����H\n\n");

   printf("�ŏ��ɉ��~�a���܂����H");
   scanf("%lf",&capital);

   printf("�N���͉����ł����H�i�����j");
   scanf("%lf",&interest);

   printf("�P�N�����艽�~�g���܂����H");
   scanf("%lf",&withdraw);

   do{
      capital = (capital + (capital*(interest/100))) - withdraw;
      printf("%3d�N��  %10.1lf�~���܂��Ă��܂�\n",year,capital);
      year++;
   }while (capital >= 0);   

   return 0;
}
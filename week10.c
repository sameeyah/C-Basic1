#include <stdio.h>

int main()
{
   int year=1;
   double capital,interest;

   printf("100���~���߂܂��傤�I�I\n\n");

   printf("���~�A�a���܂����H");
   scanf("%lf",&capital);

   printf("�N���͉����ł����H�i�����j");
   scanf("%lf",&interest);

   do{
      capital = capital + (capital*interest/100);
      printf("%d�N��%lf�~���܂��Ă��܂�\n",year,capital);
      year++;
   }while (capital <= 1000000);   

   return 0;
}
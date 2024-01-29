#include <stdio.h>

int main()
{
   int year=1;
   double capital,interest;

   printf("100万円貯めましょう！！\n\n");

   printf("何円、預けますか？");
   scanf("%lf",&capital);

   printf("年利は何％ですか？（小数可）");
   scanf("%lf",&interest);

   do{
      capital = capital + (capital*interest/100);
      printf("%d年後%lf円貯まっています\n",year,capital);
      year++;
   }while (capital <= 1000000);   

   return 0;
}
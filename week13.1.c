#include <stdio.h>

int main()
{
   int year=1;
   double capital,interest, withdraw;

   printf("貯金は何年後に底をつきますか？\n\n");

   printf("最初に何円預けますか？");
   scanf("%lf",&capital);

   printf("年利は何％ですか？（小数可）");
   scanf("%lf",&interest);

   printf("１年あたり何円使いますか？");
   scanf("%lf",&withdraw);

   do{
      capital = (capital + (capital*(interest/100))) - withdraw;
      printf("%3d年後  %10.1lf円貯まっています\n",year,capital);
      year++;
   }while (capital >= 0);   

   return 0;
}
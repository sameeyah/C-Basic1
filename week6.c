#include <stdio.h>

int main()
{
   int jp, math, eng, sum;
   double avg;

   printf("国語の点数？\n");
   scanf("%d",&jp);

   printf("数学の点数？\n");
   scanf("%d",&math);

   printf("英語の点数？\n");
   scanf("%d",&eng);

   sum = jp+math+eng;
   avg = (double)(sum)/3;

   printf("3科目の合計点は%d点、平均点は%lf点です。\n",sum,avg);

   if(avg >= 80)
   { 
	printf("優秀です！\n");
   }
   else if(avg >= 60 && avg < 80)
   {  
	printf("合格です。\n");
   }
   else if(avg < 60)
   {  
	printf("再試験です。\n");
   }
  
   return 0;
}
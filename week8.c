#include <stdio.h>

int main()
{
   int day, total_day;
   double hour, total_hour = 0, avg_hour;

   printf("何日分集計しますか？");
   scanf("%d",&total_day);

   for(day = 1; day <= total_day; day++){
	printf("%d日目の学習時間は？",day);
        scanf("%lf",&hour);
        total_hour = total_hour + hour;
   }

   printf("%d日間で%lf時間、学習しました。\n",total_day,total_hour);

   avg_hour = total_hour/total_day;

   printf("一日あたりの学習時間は%lf時間でした。\n",avg_hour);

   if(avg_hour >= 5){  
	printf("お疲れ様でした\n");
   }
   else{  
	printf("もっとできるでしょう？\n");
   }

   return 0;
}
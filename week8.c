#include <stdio.h>

int main()
{
   int day, total_day;
   double hour, total_hour = 0, avg_hour;

   printf("�������W�v���܂����H");
   scanf("%d",&total_day);

   for(day = 1; day <= total_day; day++){
	printf("%d���ڂ̊w�K���Ԃ́H",day);
        scanf("%lf",&hour);
        total_hour = total_hour + hour;
   }

   printf("%d���Ԃ�%lf���ԁA�w�K���܂����B\n",total_day,total_hour);

   avg_hour = total_hour/total_day;

   printf("���������̊w�K���Ԃ�%lf���Ԃł����B\n",avg_hour);

   if(avg_hour >= 5){  
	printf("�����l�ł���\n");
   }
   else{  
	printf("�����Ƃł���ł��傤�H\n");
   }

   return 0;
}
#include <stdio.h>

int main()
{
   int test[100], student, i,j, max = -1, sum = 0, tmp;
   double avg = 0;

   printf("何人の点数を入力しますか？ ");
   scanf("%d",&student);

   printf("%d人の点数を入力してください。\n", student);
 
   for(i = 0; i < student; i++){
   	  printf("%d番目の点数は？ ",i+1);
   	  scanf(" %d", &test[i]);
   }
    
   printf("-----\n");

   for(i = 0; i < student - 1; i++){
      for(j = i+1; j < student; j++){
         if(test[j] > test[i]){
            tmp = test[j];
            test[j] = test[i];
            test[i] = tmp;
          }
      }
   }

   for(j = 0; j < student; j++){
      if (test[j] >= 80){
         printf("%d位の人は「優秀」、点数は%dです。\n", j+1, test[j]);
      }
      else if (test[j] >= 60){
         printf("%d位の人は「合格」、点数は%dです。\n", j+1, test[j]);
      }
      else{
         printf("%d位の人は「不合格」、点数は%dです。\n", j+1, test[j]);
      }
   }
  
   printf("-----\n");   

   for(j = 0; j < student; j++){
      if(test[j] > max){
         max = test[j];
      }
   }

   printf("最高得点は%d点です。\n", max);
   
   printf("-----\n"); 

   for(j = 0; j < student; j++){ 
      sum += test[j];
   }

   avg = (double)sum / (double)student;

   printf("平均点は%lf点です。\n", avg);

   return 0;
}
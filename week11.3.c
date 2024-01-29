#include <stdio.h>

int main()
{
   int test[5], student, i, max = -1;
   double sum = 0.0, avg = 0;
   char * grade;

   printf("何人の点数を入力しますか？");
   scanf("%d",&student);

   printf("%d人の点数を入力してください。\n", student);
 
   for(i = 1; i <= student; i++){
  　　printf("%d番目の点数は？",i);
   　 scanf("%d", &test[i]);
   }
    
   printf("-----\n");

   for(i = 1; i <= student; i++){
      if (test[i] >= 80){
        grade = "「優秀」";
      }
      else if (test[i] <= 79 && test[i] >= 60){
        grade = "「合格」";
      }
      else{
        grade = "「不合格」";
      }
   	  printf("%d番目の人の%s点数は%dです。\n", i, grade, test[i]);
   }
  
   printf("-----\n");   

   for(i = 1; i <= student; i++){
      if(test[i] > max){
        max = test[i];
      }
   }

   printf("最高得点は%d点です。\n", max);
   
   printf("-----\n"); 

   for(i = 1; i <= student; i++){ 
      sum = sum + test[i];
   }

   avg = sum/student;

   printf("平均点は%lf点です。\n", avg);

   return 0;
}
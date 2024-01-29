#include <stdio.h>

int main()
{
   int test[80], student, i, j, tmp;

   printf("人数？: ");
   scanf("%d",&student);

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

   for(i = 0; i < student; i++){
       printf("list of numbers %d\n",test[i]);
   }

   /*for(j = 0; j < student; j++){
      if (test[j] >= 90){
         printf("学生%d番：%dはS、\n", j+1, test[j]);
      }
      else if (test[j] >= 80){
         printf("学生%d番：%dはA、\n", j+1, test[j]);
      }
      else if (test[j] >= 70){
         printf("学生%d番：%dはB、\n", j+1, test[j]);
      }
      else if (test[j] >= 60){
         printf("学生%d番：%dはC、\n", j+1, test[j]);
      }
      else{
         printf("学生%d番：%dはD、\n", j+1, test[j]);
      }
   }*/

   return 0;
}




/*for(i = 0; i < student; i++){
      if (test[i] >= 90){
       // index = i+1;
        grade = "S";
      }
      else if (test[i] <= 89 && test[i] >= 80){
       // index = i+1;
        grade = "A";
      }
      else if (test[i] <= 79 && test[i] >= 70){
       // index = i+1;
        grade = "B";
      }
      else if (test[i] <= 69 && test[i] >= 60){
       // index = i+1;
        grade = "C";
      }
      else{
       // index = i+1;
        grade = "D";
      }
   	  printf("学生%d番:%d %s\n", i+1, test[i], grade);
   }*/




 /*for(i = 0; i < student; i++){
       if(test[i] >=90){
           element = test[i];
           if (element == test[j]){
               index = j;
           }
           printf("学生%d番：%d S \n", index, test[i]); 
       }

       else if (test[i] <= 89 && test[i] >= 80){
           printf("学生%d番：%d A \n", i, test[i]); 
       } 

       else if (test[i] <= 79 && test[i] >= 70){
           printf("学生%d番：%d B \n", i, test[i]); 
       }

       else if (test[i] <= 69 && test[i] >= 60){
           printf("学生%d番：%d C \n", i, test[i]); 
       }
 
       else{
           printf("学生%d番：%d D \n", i, test[i]); 
       }
   }*/
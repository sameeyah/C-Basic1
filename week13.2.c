#include <stdio.h>

int main()
{
   int test[80], bango[80], student, i, j, tmp;
   char *grade;

   printf("�l���H : ");
   scanf("%d",&student);

   for(i = 0; i < student; i++){
   	  printf("%d�Ԗڂ̓_���́H ",i+1);
   	  scanf(" %d", &test[i]);
          bango[i] = i+1;
   }
    
   printf("-----\n");
   
   for(i = 0; i < student - 1; i++){
      for(j = i+1; j < student; j++){
          if(test[j] > test[i]){
              tmp = test[j];
              test[j] = test[i];
              test[i] = tmp;

              tmp = bango[j];
              bango[j] = bango [i];
              bango[i] = tmp;
           }
       }
   }

   for(i = 0; i < student; i++){
       if(test[i] >=90){
           printf("�w��%d�ԁF%3d S \n", bango[i], test[i]); 
       }

       else if (test[i] <= 89 && test[i] >= 80){         
           printf("�w��%d�ԁF%3d A \n", bango[i], test[i]); 
       } 

       else if (test[i] <= 79 && test[i] >= 70){
           printf("�w��%d�ԁF%3d B \n", bango[i], test[i]); 
       }

       else if (test[i] <= 69 && test[i] >= 60){
           printf("�w��%d�ԁF%3d C \n", bango[i], test[i]); 
       }
 
       else{
           printf("�w��%d�ԁF%3d D \n", bango[i], test[i]); 
       }
   }

   return 0;
}
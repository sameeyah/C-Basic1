#include <stdio.h>

int main()
{
   int test[100], student, i,j, max = -1, sum = 0, tmp;
   double avg = 0;

   printf("���l�̓_������͂��܂����H ");
   scanf("%d",&student);

   printf("%d�l�̓_������͂��Ă��������B\n", student);
 
   for(i = 0; i < student; i++){
   	  printf("%d�Ԗڂ̓_���́H ",i+1);
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
         printf("%d�ʂ̐l�́u�D�G�v�A�_����%d�ł��B\n", j+1, test[j]);
      }
      else if (test[j] >= 60){
         printf("%d�ʂ̐l�́u���i�v�A�_����%d�ł��B\n", j+1, test[j]);
      }
      else{
         printf("%d�ʂ̐l�́u�s���i�v�A�_����%d�ł��B\n", j+1, test[j]);
      }
   }
  
   printf("-----\n");   

   for(j = 0; j < student; j++){
      if(test[j] > max){
         max = test[j];
      }
   }

   printf("�ō����_��%d�_�ł��B\n", max);
   
   printf("-----\n"); 

   for(j = 0; j < student; j++){ 
      sum += test[j];
   }

   avg = (double)sum / (double)student;

   printf("���ϓ_��%lf�_�ł��B\n", avg);

   return 0;
}
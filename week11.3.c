#include <stdio.h>

int main()
{
   int test[5], student, i, max = -1;
   double sum = 0.0, avg = 0;
   char * grade;

   printf("���l�̓_������͂��܂����H");
   scanf("%d",&student);

   printf("%d�l�̓_������͂��Ă��������B\n", student);
 
   for(i = 1; i <= student; i++){
  �@�@printf("%d�Ԗڂ̓_���́H",i);
   �@ scanf("%d", &test[i]);
   }
    
   printf("-----\n");

   for(i = 1; i <= student; i++){
      if (test[i] >= 80){
        grade = "�u�D�G�v";
      }
      else if (test[i] <= 79 && test[i] >= 60){
        grade = "�u���i�v";
      }
      else{
        grade = "�u�s���i�v";
      }
   	  printf("%d�Ԗڂ̐l��%s�_����%d�ł��B\n", i, grade, test[i]);
   }
  
   printf("-----\n");   

   for(i = 1; i <= student; i++){
      if(test[i] > max){
        max = test[i];
      }
   }

   printf("�ō����_��%d�_�ł��B\n", max);
   
   printf("-----\n"); 

   for(i = 1; i <= student; i++){ 
      sum = sum + test[i];
   }

   avg = sum/student;

   printf("���ϓ_��%lf�_�ł��B\n", avg);

   return 0;
}
#include <stdio.h>

int main()
{
   int jp, math, eng, sum;
   double avg;

   printf("����̓_���H\n");
   scanf("%d",&jp);

   printf("���w�̓_���H\n");
   scanf("%d",&math);

   printf("�p��̓_���H\n");
   scanf("%d",&eng);

   sum = jp+math+eng;
   avg = (double)(sum)/3;

   printf("3�Ȗڂ̍��v�_��%d�_�A���ϓ_��%lf�_�ł��B\n",sum,avg);

   if(avg >= 80)
   { 
	printf("�D�G�ł��I\n");
   }
   else if(avg >= 60 && avg < 80)
   {  
	printf("���i�ł��B\n");
   }
   else if(avg < 60)
   {  
	printf("�Ď����ł��B\n");
   }
  
   return 0;
}
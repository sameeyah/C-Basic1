#include <stdio.h>

int main()
{
   int result_a, result_b;

   printf("2人の点数を入力してください。\n");

   printf("Aさんの点数は？");

   scanf("%d",&result_a);

   printf("Bさんの点数は？");

   scanf("%d",&result_b);

   if(result_a == result_b){ 
	printf("AさんとBさんは同点です。\n");
   }
   else if(result_a > result_b){  
	printf("AさんはBさんよりも高得点でした。\n");
   }
   else{  
	printf("BさんはAさんよりも高得点でした。\n");
   }
  
   return 0;
}
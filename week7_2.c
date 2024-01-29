#include <stdio.h>

int main()
{
   int item_price, sum1, sum2, sum, item_number, credit, debit; 

   printf("肉まんの税抜単価は？");

   scanf("%d",&item_price);

   sum = item_price*1.08;  

   printf("肉まんの税込単価は%d円です。\n", sum);
 
   printf("肉まんを何個買いますか？");

   scanf("%d",&item_number);
   
   sum1 = sum*item_number;

   printf("あんまんの税抜単価は？");

   scanf("%d",&item_price);

   sum = item_price*1.08;  

   printf("あんまんの税込単価は%d円です。\n", sum);
 
   printf("あんまんを何個買いますか？");

   scanf("%d",&item_number);

   sum2 = sum*item_number;

   sum = sum1+sum2;

   printf("合計金額は%d円です。\n", sum);

   if(sum <= 1000){ 
	credit = 1000 - sum;
        printf("購入可能。おつりは%d円です。\n",credit);
   }
   else{  
        debit = sum - 1000;
	printf("所持金が%d円不足しています。\n", debit);
   }

   return 0;
}
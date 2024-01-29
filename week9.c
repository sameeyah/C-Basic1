#include <stdio.h>

int main()
{
   int i, j, ch=0;
 
   for(i = 1; i <= 9; i++){
       for(j = 1; i >= j; j++){
          if(ch == 0){
             printf("*");
             ch = 1;
          }
          else{
             printf("-");
             ch = 0;
          }
       }
       printf("\n");
   }

   return 0;
}
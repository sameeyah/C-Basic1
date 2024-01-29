#include <stdio.h>

int main(void)
{
   FILE *fp;
   int i, j, a[2][5];

   fp = fopen("output.txt","w");

   for(i = 0; i < 2; i++){
     for(j = 0; j < 5; j++){
         a[i][j] = (i+1)*(j+1);
     }
   }

   for(i = 0; i < 2; i++){
     for(j = 0; j < 5; j++){
       fprintf(fp,"%3d",a[i][j]);
     }
     fprintf(fp,"\n");
   }

   fclose(fp);

   return 0;
}
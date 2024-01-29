#include <stdio.h>
int main(){
   int up, down, height;

   printf("これは台形の面積を求めるプログラムです。\n");

   printf("上底の長さは？\n");
   scanf("%d",&up);

   printf("下底の長さは？\n");
   scanf("%d",&down);

   printf("高さは？\n");
   scanf("%d",&height);

   printf("台形の面積は%dです。",(up+down)*height/2);
   
   return 0;
}
#include <stdio.h>
int main(){
   int num;
   printf("ご家族の人数を入力してください。\n");
   scanf("%d",&num);
   printf("私の家族は%d人です。\n",num);
   

   double a;
   printf("リンゴ２個を分け合うと1人何個たべられる？\n");
   scanf("%lf",&a);
   printf("私はリンゴ%lf個食べました。",a);
   return 0;
}
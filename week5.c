#include <stdio.h>
int main(){
   int up, down, height;
   double area;

   printf("����͑�`�̖ʐς����߂�v���O�����ł��B\n");

   printf("���̒����́H\n");
   scanf("%d",&up);

   printf("����̒����́H\n");
   scanf("%d",&down);

   printf("�����́H\n");
   scanf("%d",&height);

   area=(double)(up+down)*height/2;
   printf("��`�̖ʐς�%lf�ł��B",area);
   
   return 0;
}
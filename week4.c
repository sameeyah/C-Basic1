#include <stdio.h>
int main(){
   int up, down, height;

   printf("����͑�`�̖ʐς����߂�v���O�����ł��B\n");

   printf("���̒����́H\n");
   scanf("%d",&up);

   printf("����̒����́H\n");
   scanf("%d",&down);

   printf("�����́H\n");
   scanf("%d",&height);

   printf("��`�̖ʐς�%d�ł��B",(up+down)*height/2);
   
   return 0;
}
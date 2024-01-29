#include <stdio.h>

int main()
{
   int year=1;
   double capital,interest, withdraw;

   printf("’™‹à‚Í‰½”NŒã‚É’ê‚ğ‚Â‚«‚Ü‚·‚©H\n\n");

   printf("Å‰‚É‰½‰~—a‚¯‚Ü‚·‚©H");
   scanf("%lf",&capital);

   printf("”N—˜‚Í‰½“‚Å‚·‚©Hi¬”‰Âj");
   scanf("%lf",&interest);

   printf("‚P”N‚ ‚½‚è‰½‰~g‚¢‚Ü‚·‚©H");
   scanf("%lf",&withdraw);

   do{
      capital = (capital + (capital*(interest/100))) - withdraw;
      printf("%3d”NŒã  %10.1lf‰~’™‚Ü‚Á‚Ä‚¢‚Ü‚·\n",year,capital);
      year++;
   }while (capital >= 0);   

   return 0;
}
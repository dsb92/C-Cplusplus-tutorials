/* Skriv et program der ud fra et input mellem 1...9 udskriver et m�nedsnavn Januar er m�ned nummer 1. */

#include<stdio.h>

int main()

{

char ind;

printf("\t%s\n", "1 = Januar");
printf("\t%s\n", "2 = Februar");
printf("\t%s\n", "3 = Marts");
printf("\t%s\n", "4 = April");
printf("\t%s\n", "5 = Maj");
printf("\t%s\n", "6 = Juni");
printf("\t%s\n", "7 = Juli");
printf("\t%s\n", "8 = August");
printf("\t%s\n", "9 = September");

printf("%s\n", "V�lg 1...9");
ind = getchar();

switch (ind)
{
   case '1': printf("%s\n", "Du er i Januar m�ned");
       break;
   case '2': printf("%s\n", "Du er i Februar m�ned");
       break;
   case '3': printf("%s\n", "Du er i Marts m�ned");
       break;
   case '4': printf("%s\n", "Du er i April m�ned");
       break;
   case '5': printf("%s\n", "Du er i Maj m�ned");
       break;
   case '6': printf("%s\n", "Du er i Juni m�ned");
       break;
   case '7': printf("%s\n", "Du er i Juli m�ned");
       break;
   case '8': printf("%s\n", "Du er i August m�ned");
       break;
   case '9': printf("%s\n", "Du er i September");
       break;

default: printf("%s\n", "M�ned er ikke i systemet.");

}
return 0;
}

/* Skriv et program der ud fra et input mellem 1...9 udskriver et månedsnavn Januar er måned nummer 1. */

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

printf("%s\n", "Vælg 1...9");
ind = getchar();

switch (ind)
{
   case '1': printf("%s\n", "Du er i Januar måned");
       break;
   case '2': printf("%s\n", "Du er i Februar måned");
       break;
   case '3': printf("%s\n", "Du er i Marts måned");
       break;
   case '4': printf("%s\n", "Du er i April måned");
       break;
   case '5': printf("%s\n", "Du er i Maj måned");
       break;
   case '6': printf("%s\n", "Du er i Juni måned");
       break;
   case '7': printf("%s\n", "Du er i Juli måned");
       break;
   case '8': printf("%s\n", "Du er i August måned");
       break;
   case '9': printf("%s\n", "Du er i September");
       break;

default: printf("%s\n", "Måned er ikke i systemet.");

}
return 0;
}

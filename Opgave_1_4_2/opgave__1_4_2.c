/* Omskriv programmet for1.c s�ledes, at det bruger en do... while-l�kke i stedet for en for-l�kke. */

#include<stdio.h>

int main()

{

int i = 1;

do
  printf("%s%d\n", "i er nu: ", i++);
while(i < 10);
return 0;

}


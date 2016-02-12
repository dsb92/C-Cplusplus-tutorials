/* Skriv et program der undersøger, hvornår en signed int skifter fortegn. */

#include<stdio.h>

int main()

{

signed int i;

for(i = -528222; i < 1056555555555555555 ; i++)
   printf("%s%d\n", "i = ", i);
return 0;

}

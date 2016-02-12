/* Skriv et program, der trækker to tal fra hinanden og afleverer resultatet på skærmen. */

#include<stdio.h>

int main()

{

int a,b,c;

char tekst[] = "Differencen er : ";

a = 6;
b = 3;
c = a-b;

printf("%s%d\n", tekst, c);
return 0;

}




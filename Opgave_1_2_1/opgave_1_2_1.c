/* Skriv et program, der tr�kker to tal fra hinanden og afleverer resultatet p� sk�rmen. */

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




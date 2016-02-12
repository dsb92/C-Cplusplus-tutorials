/* Dette program viser, hvad der sker, hvis man forsøger at tilskrive en variable af typen int med en variabel af typen float. */

#include<stdio.h>

int main()

{

int a;
float pi = 22.0/7.0;

a = pi;

printf("%d\t%f\n", a, pi);

return 0;

}

/* Resultatet bliver at heltalsvariablen a smider alt bag kommaet væk, der sker ingen afrunding, kun bortsmidning. */


/* Programmet viser, hvordan man kan bruge en char til at tælle med på en lidt usædvanlig måde. */

#include<stdio.h>

int main()

{

char a;

for (a = 'A'; a <= 'Z'; a++)  // a sættes lige med A, som har talværdien 65. Der lægges en værdi til i a for hver gang løkken tager en
   printf("%c\t%d\n", a, a);  // omgang, sålængde a's værdi er mindre end eller lig med værdien af bogstavet Z
   return 0;

}

/* Dette program er også en ASCII-tabel: Tabel over hvilke talværdier, hvert bogstav har.

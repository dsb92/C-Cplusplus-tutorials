/* Programmet viser, hvordan man kan bruge en char til at t�lle med p� en lidt us�dvanlig m�de. */

#include<stdio.h>

int main()

{

char a;

for (a = 'A'; a <= 'Z'; a++)  // a s�ttes lige med A, som har talv�rdien 65. Der l�gges en v�rdi til i a for hver gang l�kken tager en
   printf("%c\t%d\n", a, a);  // omgang, s�l�ngde a's v�rdi er mindre end eller lig med v�rdien af bogstavet Z
   return 0;

}

/* Dette program er ogs� en ASCII-tabel: Tabel over hvilke talv�rdier, hvert bogstav har.

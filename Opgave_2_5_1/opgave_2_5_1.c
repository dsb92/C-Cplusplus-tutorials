/* Skriv et program der t�ller fra 1 til og med 10. V�rdierne skal udskrives for hver omgang i l�kken. Programmet skal bruge en for-l�kke
   og opgraderingen af l�kke-kontrolvariablen skal v�re suffiks. */

#include<stdio.h>

int main()

{

int i;

for(i = 1; i <= 10; i++)
   {
      printf("%d\n", i);
   }

return 0;

}

/* Pr�fis: ++i. Variablen bliver opdateret, f�r der udskrives p� sk�rmen.
   Suffiks: i++ Variablen bliver opdateret, efter der udskrives p� sk�rmen.
*/

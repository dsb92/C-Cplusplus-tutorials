/* Skriv et program der tæller fra 1 til og med 10. Værdierne skal udskrives for hver omgang i løkken. Programmet skal bruge en for-løkke
   og opgraderingen af løkke-kontrolvariablen skal være suffiks. */

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

/* Præfis: ++i. Variablen bliver opdateret, før der udskrives på skærmen.
   Suffiks: i++ Variablen bliver opdateret, efter der udskrives på skærmen.
*/

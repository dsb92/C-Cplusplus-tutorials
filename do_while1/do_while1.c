/*i do-while l�kker vil l�kken altid genneml�bes mindst en gang. Hvis i initialiseret til v�rdien nul i while1.c-programmet
  sker der ingen nedt�lling(pr�v) */

#include<stdio.h>

int main()

{

int i = 0;

printf("Klar til affyring!\n");
do
  printf("%d\n", i--);
while (i > 0);
printf("FYR!\n");
return 0;

}

/*i do-while løkker vil løkken altid gennemløbes mindst en gang. Hvis i initialiseret til værdien nul i while1.c-programmet
  sker der ingen nedtælling(prøv) */

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

/* Tilpas programmet rente1.c fra afsnit 1.6 således at det benytter en do... while-løkke. */

#include<stdio.h>

int main()

{

int terminer = 10;
int i = 1;
float rente, startsum, slutsum;

rente = 3.5;
startsum = slutsum = 1000;

do
  slutsum = slutsum * (1 + rente/100), i++;   //Alt hvad der lagde i while, skal op i do.


while (i <= terminer);
printf("%s%d", "Efter ", terminer);
  printf("%s%f\n", " terminer\ner summen ", slutsum);

return 0;

}

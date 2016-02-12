/* Tilpas programmet rente1.c fra afsnit 1.6 således at det benytter en while-løkke. */

#include<stdio.h>

int main()

{

int terminer = 10;
int i = 1;
float rente, startsum, slutsum;


rente = 3.5;
startsum = slutsum = 1000;

while (i <= terminer)
	{
	  slutsum = slutsum * (1 + rente/100);
	  i++;
	}

printf("%s%d", "Efter ", terminer);
printf("%s%f\n", " terminer\n er summen ", slutsum);

return 0;

}




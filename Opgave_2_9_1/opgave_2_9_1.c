/* Skriv et program der indeholder en funktion til at teste om et tal er lige. Test funktionen ved at teste alle tal fra 0 til 10. */

#include<stdio.h>

int ligetal(int tal)
{
	if ( (tal % 2) == 0)
		return 1;
	else
		return 0;
}


int main()
{

int i;

for(i = 0; i <= 10; i++)
   if(ligetal(i))
      printf("%d%s\n", i, " er et lige tal ");
   else
      printf("%d%s\n", i, " er et ulige tal");
return 0;

}

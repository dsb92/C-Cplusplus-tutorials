/* Skriv en menufunktion til programmet struct4.c. Det skal fungerer ved at programmet ved start tilbyder brugeren en menu.
   I menuen skal der v�re to valgmuligheder: indtast en ny person og udskriv samlet personliste. */
#include <stdio.h>
#include "support1.h"

struct personType hentPerson(struct personType person)

{

		char tmp[4];


		printf("%s", "Indtast fornavn : ");
  		hentLinie(person.forNavn, 20);
		printf("%s", "Indtast efternavn : ");
  		hentLinie(person.efterNavn, 20);
		printf("%s", "Indtast alder : ");
		hentLinie(tmp, 4);
		person.alder = atoi(tmp);


	return person;
}




void udskrivPerson(struct personType person)
{
   		printf("%s\t", person.forNavn);
		printf("%s\t", person.efterNavn);
		printf("%4d\n", person.alder);
}

int main()

{

int i;
int antal = 3;
struct personType personer[10];

for (i = 0; i < antal; i++)
   personer[i] = hentPerson(personer[i]);
printf("%s\n", "Udskriver");
for (i = 0; i < antal; i++)
    udskrivPerson(personer[i]);
return 0;

}

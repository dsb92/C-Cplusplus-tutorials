/* Skriv et program med de to variabler kmITimen og tid. Programmet skal udskrive, hvor langt man er kommet
   efter have kørt tid timer med hastiden kmITimen. */

#include<stdio.h>

int main()

{

int kmITimen;
int tid;
int distance;

char tekst[] = "Antal kilometer koert : ";

kmITimen = 50;
tid = 2;			// i timer
distance = kmITimen * tid;

printf("%s%d\n", tekst, distance);
return 0;

}

/* Skriv et program der beregner, hvor langt der er k�rt efter 1,2..9 timer med en fast hastighed af 100 km/timen.
   Resultatet skal udskrives p� sk�rmen. */

#include<stdio.h>

int main()

{

int t;
int d;
int KMITimen = 100;


for (t = 1; t<=9; t++)
{
	d = t * KMITimen;
	printf("%s%d", "Antal km efter ", t);
	printf("%s%d\n", " timer : ", d);

}

return 0;
}



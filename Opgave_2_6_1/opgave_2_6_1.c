/* Skriv et program der indeholder to l�kker, inden i hinanden. Begge l�kker skal t�lle fra 1 til og med 10. N�r kontrolvariablen i den inderste l�kke
   er lig med kontrolvariablen i den yderste l�kke, skal det udskrives p� sk�rmen. Inden du eksekverer programmet, b�r du m�ske sp�rge dig selv,
   hvor mange gange vil der blive skrevet til sk�rmen? */

#include<stdio.h>

int main()

{

int i, n;


for(i = 1; i <= 10; i++)
	{
		for(n = 1; n <= 10; n++)
			if(i == n)
				{
					printf("%s%d\n", "n er lig med i: ", n);
				}
	}


return 0;

}

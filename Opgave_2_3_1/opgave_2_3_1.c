/* Skriv et program der omregner en fahrenheit-temperatur til celsius-grader. Programmet skal udskrive en tabel over omregningen i intervallet 0 til 100
   i step på 10. TIP: C = (5/9) x (F-32). */

#include<stdio.h>

int main()

{

int F;
float C;

for(F = 0; F <= 100; F++)
	{
		C = (5.0/9.0) * (F-32.0);
		printf("%s%d\t", "F: ", F);
	    printf("%s%5.1f\n", " C: ", C);  //Med ét decimaltal.
	}

return 0;

}






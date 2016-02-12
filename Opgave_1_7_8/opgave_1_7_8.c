/* Skriv et program der udskriver antallet af bogstaver i et input. TIP: Hvis det ikke er et mellemrum, må du betragte det som et bogstav. */

#include<stdio.h>

int main()

{

char ind;
char test = ' ';
int taeller = 0;
int forhold;


while ((ind = getchar()) != EOF)
	if (ind == test)
		taeller++;

	forhold = test/ind;

printf("%s", "Forholdet mellem bogstaver og mellemrum er: ");
printf("%d\n", forhold);

return 0;

}

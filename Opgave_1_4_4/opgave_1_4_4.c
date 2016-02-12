/* Skriv et program med en variabel der tælles op fra 1 til 100. Når variablen får værdien 50, skal der udskrives "nu er vi halvvejs" på skærmen. */

#include<stdio.h>

int main()

{

int i;

for(i = 1; i <= 100; i++)
	if(i == 50)
		printf("%d%s\n", i, ": vi er nu halvvejs!");
	else
		printf("%d\n", i);
return 0;


}

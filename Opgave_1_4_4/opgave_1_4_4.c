/* Skriv et program med en variabel der t�lles op fra 1 til 100. N�r variablen f�r v�rdien 50, skal der udskrives "nu er vi halvvejs" p� sk�rmen. */

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

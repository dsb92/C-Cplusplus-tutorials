/* Tilpas programmet sekperdoegn.c fra afsnit 1.6 s�ledes at det samtidig benytter en while-l�kke, en for-l�kke og en do... while-l�kke. */

#include<stdio.h>

int main()

{

int sek = 60;
int min = 60;
int timer = 24;
int sekunder = 0;
int h, i, j;

h = 0;
i = 0;

while ( h < timer)
{
	sekunder++;
	h++;
}
for ( j = 0; j < min; j++)
	{
	sekunder++;
	}
do
{
  i++;
}
while ( i < sek);

sekunder ++;

printf("%s\n", "Antal sekunder p� et d�gn er: ");
printf("%d\n", sekunder);
return 0;

}

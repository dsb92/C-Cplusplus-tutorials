/* Skriv et program der indeholder funktionen int hvorLangt(int hastighed, int tid). Funktionen skal returnere, hvor langt man er kommet
   efter tid k�rsel med hastighed km/t. */

#include<stdio.h>


int hvorLangt(int hastighed, int tid)
{
   return hastighed * tid; 		//hvor langt
}

int main()

{

int hastighed = 140;
int tid = 12;

printf("%d%c%d%c%d\n", hastighed, '*', tid, '=', hvorLangt(hastighed,tid));
return 0;

}

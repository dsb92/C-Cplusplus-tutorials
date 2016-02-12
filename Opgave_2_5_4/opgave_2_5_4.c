/* Skriv et program der omregner tid, opgivet i dage, til timer. */

#include<stdio.h>

int main()

{

int d = 50; //dage
int t;      // timer

t = d*24;  // 1 dag = 24 timer.

printf("%d%s", d, " dage i timer: ");
printf("%d%s\n", t, " timer.");

return 0;

}

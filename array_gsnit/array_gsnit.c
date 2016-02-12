/* Tilpas programmet således at programmet udskriver alle de de tal, der ligger inden for +/- 10% af gennemsnittet. */

#include<stdio.h>
#define MAX 10

int main()

{

int i;
float talSaet[MAX];
float sum = 0;

talSaet[0] = 1.23;
talSaet[1] = 8.31;
talSaet[2] = 5.13;
talSaet[3] = 3.42;
talSaet[4] = 7.77;
talSaet[5] = 4.24;
talSaet[6] = 2.63;
talSaet[7] = 9.91;
talSaet[8] = 0.17;
talSaet[9] = 6.27;

for (i = 0; i < MAX; i++)

	sum += talSaet[i];
	printf("%2.4f\n", sum/MAX);


return 0;

}

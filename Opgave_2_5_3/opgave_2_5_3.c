/* Skriv et program der kan omregne tid, opgivet i minutter, til timer og minutter. */

#include<stdio.h>

int main()

{

int m = 180;
float t;
float r;


t = m/60.0;  //60 min = 1 time.


printf("%d%s", m, " minutter i timer og minutter: ");

if(m % 60 != 0)
	{
		r = t;
		printf("%4.2f\n", r);
	}

else
	{
		printf("%4.2f\n", t);
	}

return 0;

}

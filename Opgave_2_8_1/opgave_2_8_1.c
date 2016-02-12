/* Skriv en funktion der returnerer differencen af to heltal. */

#include<stdio.h>


int subtrahere (int a, int b)
{
  return a/b;
}

int main()

{

int a = 1210.0;
int b = 942.0;

printf("%d%s%d%s%d\n", a, "/", b, "=", subtrahere(a,b));
return 0;

}


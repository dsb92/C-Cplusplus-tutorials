/* Omskriv programmet for1.c s�ledes at det bruger en while-l�kke i stedet for en for-l�kke */

#include<stdio.h>

int main()

{

int i = 1;

while (i < 10)
    printf("%s%d\n", "i er nu = ", i++);

return 0;

}


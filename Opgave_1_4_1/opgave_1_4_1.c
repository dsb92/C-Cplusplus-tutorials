/* Omskriv programmet for1.c således at det bruger en while-løkke i stedet for en for-løkke */

#include<stdio.h>

int main()

{

int i = 1;

while (i < 10)
    printf("%s%d\n", "i er nu = ", i++);

return 0;

}



#include<stdio.h>

int charTilInt(char input[])
{

   int i, summa = 0;

for (i = 0; input[i] != '\0'; i++)
{
   summa = summa * 10 + input[i] - '0';
}
return summa;

}

int main()

{

char testData[] = "3257";

printf("%d\n", charTilInt(testData));
return 0;
}

/* Udvid programmet fra 1.4.4 s�ledes, at det skriver "nu er vi n�sten f�rdige" p� sk�rmen, n�r variablen bliver 90. */

#include<stdio.h>

int main()

{

int i;

for(i = 1; i <= 100; i++)
   if(i == 50)
     printf("%d%s\n", i, ": nu er vi halvvejs!");

   else if( i == 90)
	   printf("%d%s\n", i, ": nu er vi n�sten f�rdige!");

   else
       printf("%d\n", i);

return 0;

}

/* Udvid programmet fra 1.4.5 således at det tæller baglæns ned til på skærmen, når variablens værdi er større end 90 */

#include<stdio.h>

int main()

{

int i;
int e;

for (i = 0; i <= 90; i++)
{
 	if( i == 50)

	 printf("%d%s\n", i, ": nu er vi halvvejs!");


   else if (i == 90)

     printf("%d%s\n", i, ": nu er vi næsten færdige!");


   else
	 printf("%d\n", i);


}

for (e = 89; e >= 0; e--)
	 printf("%d\n", e);

return 0;

}


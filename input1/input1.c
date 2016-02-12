

#include<stdio.h>

int main()

{

int taeller = 0;

while (getchar() != EOF)
	taeller++;
printf("%s%d", "Der var ", taeller);
printf("%s\n", "byte i filen.");
return 0;

}
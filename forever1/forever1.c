/* Dette program vil køre uendeligt, da stopbetingelsen aldrig vil blive opfyldt. Programmet kan normalt stoppes ved at trykke
   samtidigt på Ctrl- og C-tasten */

#include<stdio.h>

int main()

{

char i;

for (i = 200; i < 300; i++)
    printf("%s%d\ni = ", i);
return 0;

}
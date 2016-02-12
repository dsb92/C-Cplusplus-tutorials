
#include <stdio.h>

int main()

{

char alfabet[] = "abcdefg";
char *pegepind;

pegepind = &alfabet[0];

while (*pegepind != '\0')
{
   printf("%s\n", pegepind);
   pegepind++;
}

return 0;

}

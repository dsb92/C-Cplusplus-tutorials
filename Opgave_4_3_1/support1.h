struct personType

{
  int alder;
  char forNavn[20];
  char efterNavn[20];
};


int hentLinie(char linie[], int MAX)
{

   int i = 0;
   char ind;


   while (i < MAX && ( ind = getchar() ) != '\n')
      linie[i++] = ind;
   linie[i] = '\0';

   return i;
}



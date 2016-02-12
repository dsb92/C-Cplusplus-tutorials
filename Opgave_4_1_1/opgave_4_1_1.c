/* Tilpas programmet struct1.c således at efternavnet udskrives i stedet for fornavet. */

#include <stdio.h>

struct personType
{

  int alder;
  char forNavn[20];
  char efterNavn[20];
};

int main()
{

struct personType hans;

  hans.alder = 23;
  strcpy(hans.forNavn, "Jens");
  strcpy(hans.efterNavn, "Petersen");

  printf("%s ", hans.efterNavn);   //Tilgå variablen efterNavn (Opgave_4_1_1)
  printf("%s\n", hans.forNavn);  	//Tigå variablen forNavn(Opgave_4_1_2: Udskriv både efternavn og fornavn i den rækkefølge)
  printf("%s ", hans.forNavn);  //Opgave_4_1_3: Udskriv både efternavn og fornavn i den omvendte rækkefølge.
  printf("%s\n", hans.efterNavn); //Oogave 4_1_3--

  return 0;

}


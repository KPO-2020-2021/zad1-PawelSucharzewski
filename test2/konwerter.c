#include <stdio.h>
#include <malloc.h>
#include <string.h>



char Zamien( int KodZnaku, int *TabKodow, char *TabZnakow, int Rozmiar)
{
  int i;

  for (i = 0;  i < Rozmiar; ++i) 
    if (KodZnaku == TabKodow[i]) return TabZnakow[i];

  return KodZnaku;
}


void KonwertujNapis( char *Napis, int *TabKodow, char *TabZnakow, int Rozmiar)
{
  unsigned int i;
 
  for (i = 0;  i < strlen(Napis); ++i)
    Napis[i] = Zamien(Napis[i],TabKodow,TabZnakow,Rozmiar);
}


int main()
{
  int  IloscKodow = 10;
  int  Rozmiar = IloscKodow * sizeof(int);

  int  *TabKodow = (int*)malloc(Rozmiar);
  char *TabZnakow = (char*)malloc(IloscKodow*sizeof(char)); 
  char *Napis = strdup("Cześć Świecie!!! Życzę miłego dnia.");

  TabKodow[0] = 'ć';     TabZnakow[0] = 'c';
  TabKodow[1] = 'ę';     TabZnakow[1] = 'e';
  TabKodow[2] = 'ł';     TabZnakow[2] = 'l';
  TabKodow[3] = 'ś';     TabZnakow[3] = 's';
  TabKodow[4] = 'Ś';     TabZnakow[4] = 'S';
  TabKodow[5] = 'Ż';     TabZnakow[5] = 'Z';
  TabKodow[6] = 'Ż';     TabZnakow[6] = 'Z';
  TabKodow[7] = 'Ż';     TabZnakow[7] = 'Z';
  TabKodow[8] = 'Ż';     TabZnakow[8] = 'Z';
  TabKodow[9] = 'Ż';     TabZnakow[9] = 'Z';    
  
  printf("Napis Latin2:  \"%s\"\n",Napis);

  KonwertujNapis(Napis,TabKodow,TabZnakow,IloscKodow);

  printf("Napis ASCII:   \"%s\"\n",Napis);

  return 0;
}
/*bład był spowodowany róznicą w rozmiarach typach, dla gcc program działał poprawnie dla g++ już nie*/

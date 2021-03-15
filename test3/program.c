#include <stdio.h>
#include "modul.c"

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}

/* kompoiator języka c++ wymagał dodatkowo dodania modul.c czyli zdefiniowania stałych, w domyślnej bibliotece języka c stałe te już są w przeciwieństwie do c++ */

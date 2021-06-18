#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int Days = atoi(argv[1]);

double Year  = Days / 365;

double Week  = (Days/365) / 7;







  printf(" Esos segundos equivalen a %f anos y %f semanas \n",Year, Week );

  return 0;
}

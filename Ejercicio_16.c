//suma de vectores

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char  *argv[]) {
  int Ax = atoi(argv[1]);
  int Ay = atoi(argv[2]);
  int Bx = atoi(argv[3]);
  int By = atoi(argv[4]);

  int Resultado1= Ax+Bx;
  int Resultado2= Ay+By;

  printf("La suma de los vectores A=(%d,%d) y B(%d,%d) resulto en el vector AB=(%d,%d)\n",Ax,Ay, Bx,By, Resultado1,Resultado2 );

  return 0;
}

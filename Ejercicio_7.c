#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char  *argv[]) {
  double t= atoi(argv[1]);
double resultado = sin(t+t) + sin(t+t+t);
  printf("%f\n", resultado );
  return 0;
}

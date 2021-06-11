#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
int t= atoi(argv[1]);
int p= atoi(argv[2]);
int r= atoi(argv[3]);

printf("%.4f\n", p*exp(r*t));
  return 0;
}

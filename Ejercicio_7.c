#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char  *argv[]) {
  double t= atoi(argv[1]);

  printf("%f\n", sin(t+t) + sin(t+t+t) );
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char  *argv[]) {
  double t= atoi(argv[1]);

  printf("%2f\n", sin(t+t) + sin(t+t+t) );
  return 0;
}

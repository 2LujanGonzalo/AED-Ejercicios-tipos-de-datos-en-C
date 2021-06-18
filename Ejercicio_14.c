#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char  *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);

  printf("Usted multiplico los vectores en R2 U:(%d, %d) y V:(%d, %d)\n",a, b, c, d );

int ac = a*c;
int bd = b*d;

int acbd= ac + bd;

printf("La multiplacion de los vectores equivale a:%d \tYAY!\n",acbd);


  return 0;
}

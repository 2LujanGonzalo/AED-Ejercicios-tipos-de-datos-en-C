//Tiro verctical

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
double pi = atoi(argv[1]);
double vi = atoi(argv[2]);
double t  = atoi(argv[3]);
double g  = 9.80;
printf("El objeto se desplazo %.2f m verticalmente\n", ( ((t*t*g)/2 ) + pi + vi) );








  return 0;

}

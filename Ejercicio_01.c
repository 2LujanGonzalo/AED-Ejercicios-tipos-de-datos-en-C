//Coseno al cuadrado mas seno al cuadrado.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
int Theta= atoi(argv[1]);

printf("%f\n" ,(cos(Theta) * cos(Theta)) + (sin(Theta) * sin(Theta)) );


  return 0;
}

//ascendente y descendente

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
int x = atoi(argv[1]);
int y = atoi(argv[2]);
int z = atoi(argv[3]);
bool asc  = false;
bool desc = false;
asc  = (x<y) && (y<z);
desc = (x>y) && (y>z);

printf("%s\n",(asc || desc ? "Verdadero" : "Falso") );
  return 0;
}

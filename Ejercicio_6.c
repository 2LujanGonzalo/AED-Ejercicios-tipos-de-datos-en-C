//tirar dos dados

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
int a = 1;
int b = 6;

srand (time(NULL));
int c = rand();
int d = rand();
 int e = (c % (b - a + 1)+ a);
 int f = (d % (b - a + 1)+ a);

printf("%d\n", e + f );





  return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char  *argv[]) {
int b = atoi(argv[1]);
int a = 100;

srand(time(NULL));
int r = rand();
r = (r % a );
printf("%d\n", r);


printf("%s!\n", (r==b  ? "Ganaste":"Perdiste"));

  return 0;
}

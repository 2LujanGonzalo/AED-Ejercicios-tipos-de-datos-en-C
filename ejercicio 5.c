#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  srand(time(NULL));
  printf("%d\n", rand()(n ));
  return 0;
}

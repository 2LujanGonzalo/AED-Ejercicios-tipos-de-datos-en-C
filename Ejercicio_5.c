//Numero aleatorio entre a y b

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);

  if (n < 0 || m < 0) {
     printf("Solo numeros positivos\n");
return 1;
  }



  srand(time(NULL));
  int r = rand();
  r = (r % (m - n + 1)+ n);
printf("El numero random es: %d\n", r);



  return 0;
}

//tirar dos dados

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void){

srand(time(NULL));

int dado1=(rand()%6)+1;
int dado2=(rand()%6)+1;

printf("%d\n", dado1+dado2);

  return 0;
}

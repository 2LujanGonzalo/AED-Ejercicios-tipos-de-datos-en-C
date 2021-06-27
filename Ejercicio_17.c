#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int Days = atoi(argv[1]);


printf("Ano: %d\n", Days / 365);
Days = Days % 365;

printf("Semana: %d\n", Days / 7);
Days = Days % 7;

printf("Dia: %d\n", Days / 1);
Days = Days % 1;

  return 0;
}

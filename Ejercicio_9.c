#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int dia = atoi(argv[1]);
  int mes = atoi (argv[2]);
if (dia < 20 && mes == 3) {
printf("Falso\n");
return 1;
}

if (dia > 20 && mes == 6) {
printf("Falso\n");
return 1;
}

 printf("%s\n",( mes >=3 && mes <=6 && dia <=31 ? "Verdadero":"falso"));



  return 0;
}

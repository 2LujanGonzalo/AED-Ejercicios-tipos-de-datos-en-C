#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char*argv[]) {
int a = atoi (argv[1]);
int b = atoi (argv[2]);

printf("%s \n", (a%b ==0 || b%a ==0) ?  "Verdadero" : "Falso");






return 0;
}

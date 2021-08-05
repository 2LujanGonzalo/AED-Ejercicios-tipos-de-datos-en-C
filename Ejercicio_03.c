//Si alguno es mas grande que los dos verdarero

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char*argv[]) {
int a = atoi (argv[1]);
int b = atoi (argv[2]);
int c = atoi (argv[3]);

printf("%s\n", (a>= b+c || b>= a+c || c>= a+b) ? "Falso" : "Verdadero"  );

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char*argv[]) {
int x = atoi (argv[1]);
int y = atoi (argv[2]);

printf("%f mm \n", sqrt(x*x+y*y) );
return 0;
}

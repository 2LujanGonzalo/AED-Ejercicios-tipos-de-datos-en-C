//producto cruz

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {

  int a =atoi(argv[1]);
  int b =atoi(argv[2]);
  int c =atoi(argv[3]);

  int d =atoi(argv[4]);
  int e =atoi(argv[5]);
  int f =atoi(argv[6]);

  printf("Usted hizo el producto cruz de los vectores en R3: X=(%d, %d, %d) e Y=(%d, %d, %d) \n",a, b, c, d, e, f );

int bf=b*f;
int ce=c*e;
int bfce=bf - ce;

int af=a*f;
int cd=c*d;
int afcd=af - cd;

int ae=a*e;
int bd=b*d;
int aebd=ae - bd;

printf("El producto Vectorial entre X e Y es (%d, %d, %d)\n",bfce, afcd, aebd );


  return 0;
}

//producto cruz

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {

  int Ux =atoi(argv[1]);
  int Uy =atoi(argv[2]);
  int Uz =atoi(argv[3]);

  int Vx =atoi(argv[4]);
  int Vy =atoi(argv[5]);
  int Vz =atoi(argv[6]);

  printf("Usted hizo el producto cruz de los vectores en R3: U=(%d, %d, %d) e Y=(%d, %d, %d) \n",Ux, Uy, Uz, Vx, Vy, Vz );

int UyVz=Uy*Vz;
int UzVy=Uz*Vy;
int pvX=UyVz-UzVy;

int UzVx=Uz*Vx;
int UxVz=Ux*Vz;
int pvY=UzVx-UxVz;

int UxVy=Ux*Vy;
int UyVx=Uy*Vx;
int pvZ=UxVy - UyVx;

printf("El producto Vectorial entre X e Y es (%d, %d, %d)\n",pvX, pvY, pvZ );


  return 0;
}

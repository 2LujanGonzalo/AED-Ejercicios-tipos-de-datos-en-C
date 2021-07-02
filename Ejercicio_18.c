//Salario a fin de mes

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char  *argv[]) {

int horas_trabajadas=atof(argv[1]);
double salario_por_horas=atof(argv[2]);

double salario_final= (horas_trabajadas * salario_por_horas);
printf("Bien Hecho Por tus horas trabajadas ganaste %f pesos\n", salario_final);


  return 0;
}

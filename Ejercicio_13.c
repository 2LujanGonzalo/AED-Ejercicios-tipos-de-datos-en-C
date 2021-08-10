//vambio de valores entre a y b.

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[]) {


int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("a:%d\t b:%d\n",a,b );

int c=a;

a=b;
b=c;
printf("a:%d\t b:%d\n",a,b );
  return 0;
  }

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
int Dinero=atoi(argv[1]);


  printf("1000:%d\n",Dinero/1000 );
Dinero=Dinero%1000;

printf("500:%d\n", Dinero/500);
Dinero=Dinero%500;

printf("200:%d\n", Dinero/200);
Dinero=Dinero%200;

printf("100:%d\n",Dinero/100 );
Dinero=Dinero%100;

printf("50:%d\n",Dinero/50 );
Dinero=Dinero%50;

printf("20:%d\n",Dinero/20 );
Dinero=Dinero%20;

printf("10:%d\n",Dinero/10 );

  return 0;
}

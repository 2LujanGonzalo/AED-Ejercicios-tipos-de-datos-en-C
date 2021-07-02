#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char  *argv[]) {
   int a=atoi(argv[1]);
   int b=atoi(argv[2]);
   int c=atoi(argv[3]);
   int d=atoi(argv[4]);
   int e=atoi(argv[5]);

   int v=0;
   int w=0;
   int x=0;
   int y=0;
   int z=0;
   (a%2==0) ? v=0 : (v=a);
   (b%2==0) ? w=0 : (w=b);
   (c%2==0) ? x=0 : (x=c);
   (d%2==0) ? y=0 : (y=d);
   (e%2==0) ? z=0 : (z=e);

printf("%d\n",(v+w+x+y+z) );
return 0;
}

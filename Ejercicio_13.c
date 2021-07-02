//vambio de valores entre a y b.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
int a = 0;
int b = 420;

  printf("a=%d\t b=%d\n",a, b );
srand(time(NULL));
int r=rand();
 r=((r%b-a+a)+a);
 int v=((r%b-a+5)+a);
if (r==a || r==b || v==a || v==b) {
((r%b-a+1)+a) && ((v%b-a+5)+a);
} else {
  printf("a=%d b=%d\n",r, v);
}
  return 0;
  }

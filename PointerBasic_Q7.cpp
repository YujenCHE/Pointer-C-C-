#include <stdio.h>

int main() {
   int a;
   char *x;
   x = (char*) &a;
   a = 512;
   x[0] = 1;
   x[1] = 2;
   printf("%d\n", a);
   return 0;
}
/***
看是用哪種機器
when we do x[0] = 1 and x[1] = 2,
the number a is changed to 00000001 00000010
which is representation of 513 in a little endian machine
https://blog.gtwang.org/programming/difference-between-big-endian-and-little-endian-implementation-in-c/
***/

#include <stdio.h>

int main() {
   char *ptr = "Faraway";
   printf("%c", *&*&*ptr);
   return 0;
}
/***
    * => dereferencing
    & => get address
    both can cancel out effect 
    
    So...
    only *ptr stay 
    
    Because %c,
    the output is 'F'
 ***/

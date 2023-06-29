#include <stdio.h>

int main() {
   char *ptr = "Faraway";
   printf("%c", *&*&ptr);
   return 0;
}

/***
都抵銷掉了
只剩ptr但沒有定義ptr
***/

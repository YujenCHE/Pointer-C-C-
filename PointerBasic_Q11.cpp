#include<stdio.h> 
void f(int *p, int *q) 
{ 
  p = q; //p指向j了
  *p = 2; //p現在在j的位址，把p(就是j)改成2
  //一切的一切都跟i沒關係
  //注意: i沒有變
} 
int i = 0, j = 1; 
int main() 
{ 
  f(&i, &j); 
  printf("%d %d", i, j); 
  
  return 0; 
}

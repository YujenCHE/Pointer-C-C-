#include <stdio.h>

int main() {
	float arr[] = {10.5, 5.5, 9.5, 12.5, 10.5};
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;
	
	printf("%f\n", *ptr2);
	printf("%d\n", ptr2 - ptr1);
	/***
	 ptr2的位址是 * ptr1 - x*sizeof(*p) where sizeof(*p) means size of data type pointed by p
	               (這裡的x = 3)
	               
	 #Only integral values can be added or substracted from a pointer
	 ***/
 
   return 0;
}

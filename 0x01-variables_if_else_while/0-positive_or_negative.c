#include <stdlib.h> 
#include <time.h>
#include <stdio.h>

/**
 * main intery point program.
 *
 * Description : print egative or positive. 
 *
 * Return : 0 scuccsess.
*/

int main(void) 
{ 
         int n; 
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         if (n > 0)
		 printf("%i is positive\n", n);
  	 else if (n == 0)
	       printf("%i is zero\n", n);
	 else
		printf("%i is negative\n", n);
         return (0); 
 }

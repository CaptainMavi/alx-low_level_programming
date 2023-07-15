#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if a random number is positive ,negative or zero.
 *
* Return: zero on Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	 if(n<0)
	 {
	 printf("%d is %s\n" ,n,"negative");
	 }
	 else if(n>0)
	 { 
	  printf("%d is %s\n" ,n,"Positive");
	 }
	 else
	 {
	 printf("%d is %s\n" ,n,"zero");
	 }
	return (0);
	
}

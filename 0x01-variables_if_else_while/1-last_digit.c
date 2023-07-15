
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main-Prints last digit of radomly generated number 
 * and whether it is greater than 5 ,less than 6 or 0
 *
 * Return Always 0(Success)
 */
int main (void)
{ 
        int n;
       srand(time(0));
       n=rand()-RAND_MAX/2
if((n%10)>5)
{       
  printf("%d Last digti of %d and is greater than 5\n",n,n % 10);
} 
else if((n%10)<6&&(n%10)!=0)
{ 
        printf("%d Last digti of %d and is less than 6 and not zero\n",n,n % 10);
}
else
{
        
        printf("%d Last digti of %d is 0\n",n,n % 10);
}
return(0);
        }

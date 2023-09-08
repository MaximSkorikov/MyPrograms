//https://www.codewars.com/kata/542f3d5fd002f86efc00081a
#include <math.h>

int prime_factors (unsigned long long n, unsigned long long factors[])
{ int count=0; 
   for ( int j = 2; j<=sqrt(n); j++) 
   {
       while (n%j==0)
             {
                factors[count++] = j; 
                n=n/j;
             }
     
    } 
  if(n!=1) 
  {
    factors[count++] = n;
  }
  return count;
}

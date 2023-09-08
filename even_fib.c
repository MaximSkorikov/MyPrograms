#include <math.h>
typedef unsigned long long ull;

ull even_fib(ull limit) 
{
    unsigned long long next, result, first;
    next = result = first = 0;
    unsigned long long  second = 1; 
    while(1)
    {   
        next = first + second;
        first = second;  
        second = next;
        
      
        if(next >= limit)
          return result;
        
        if(next % 2 == 0)
          result +=next;
    }
}

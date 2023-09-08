//https://www.codewars.com/kata/559e10e2e162b69f750000b4
#include <stddef.h>


int dominator(const int *array, size_t n) 
{ 
    if(n==1)
    {
      return array[0]; 
    }
  
  else{
        for(int i=0; i<n-1; i++)
           { 
              int count =1;
              for(int j=i+1; j<=n; j++)
                 {
                    if(array[i]==array[j])
                      {
                        count++;
                     }
          
                }     
      
               if(count > (n)/2 )
                  {
                    return array[i]; 
                  }
        
          }
  return -1;
    }
}

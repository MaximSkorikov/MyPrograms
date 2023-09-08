//https://www.codewars.com/kata/643a47fadad36407bf3e97ea
#include <stdlib.h>

//  return dynamically allocated C-string
//  output result will be freed by tester

const char *encode_cd(unsigned char n)
{
    char *result = malloc(10);
    char *p = result;
    *p++ = 'P';
  
    for(int i = 0; i<8; i++)
      {
          int a = n % 2 ;
          if (a) 
          {
            if(p[-1] == 'P') {
              *p = 'L';
            }
            else {
              *p = 'P';
            }
           
            
          }
      else {
        
        *p = p[-1];
     
      }
          n = n / 2 ;
      p++;
      }
  *p = '\0';
  return result;
      
}

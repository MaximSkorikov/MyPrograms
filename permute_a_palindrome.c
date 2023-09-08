//https://www.codewars.com/kata/58ae6ae22c3aaafc58000079
#include <stdbool.h>
#include <string.h>
bool permute_a_palindrome(const char *str_in) 
{
  int count_symbols[26] = {0};
  int symbols = 0;
  int count = 0;
  int res = 0;
  
  symbols = strlen(str_in);
  
 for(int i = 0; i < symbols; i++)
   {
    count = str_in[i] - 'a'; 
    count_symbols[count]++;  
   }
  
  for(int i = 0; i < 26; i++ ) 
  {
    if (count_symbols[i] % 2 != 0)
    {
      res++;
      if(res > 1)
      {
        {return false;}
      }
    }
  } 
  return true;
}

//https://www.codewars.com/kata/52c31f8e6605bcc646000082
void twoSum(unsigned count, const int numbers[count], int target,
			unsigned *index1, unsigned *index2)
{
  *index1 = *index2 = 0;
// assign to the index1 and index2 pointers

   for(int i = 0; i<count-1; i++)
     {
      for(int j = i+1; j<count; j++)
        {
          if(numbers[i] + numbers[j] == target)
            {
              *index1 = i;
              *index2 = j;
            }
        }
     }

}
  

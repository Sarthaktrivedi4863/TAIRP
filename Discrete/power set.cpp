#include <stdio.h>
#include <math.h>
 
void printPowerSet(char *set, int ele)
{
    
     int size = pow(2, ele);
    int i, j;
 
   
    for(i = 0; i < size; i++)
    {
      for(j = 0; j < ele; j++)
       {
         
          if(i & (1<<j))
            printf("%c", set[j]);
       }
       printf("\n");
    }
}
 

int main()
{
    char set[] = {'a','b','c'};
     printf("\n0");
    printPowerSet(set, 3);
  
    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{   int s;
    do
    {
        s = get_int("type a number between 1 and 8:\n");
    
    }
    while (s<=0);
 
    for (int i=0; i<s; i++)
    {
      for(int j=s-2; j>=i; j=j-1)
      {
        printf(" ");
      }
      for(int k=0; k<i+1; k++)
      {
        printf("#");
      }
        
        printf("  ");
 
      for(int l=0; l<i+1; l++)
      {
          printf("#");
      }
      printf("\n");
    }   
     
}

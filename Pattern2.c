// C program to illustrate the above
// given pattern of numbers.
#include<stdio.h>
  
int main()
{
      int n, i, j, num, space;
      printf("Enter the n value\n");
      scanf("%d",&n);
      space = n - 1;
  
      for ( j = 1 ; j <= n ; j++ )
      {
          num = j;
  
          for ( i = 1 ; i <= space; i++ ) // this is for spacing of the pyramid
              printf(" ");
  
          space --; // decrement the space for next line iteration 
  
          for ( i = 1 ; i <= j ; i++ )
          {
              printf("%d", num++);
          }
          num = num - 2;
          for ( i = 1 ; i < j ; i++)
          {
              printf("%d", num--);
          }
          printf("\n");
  
      }
  
      return 0;
}
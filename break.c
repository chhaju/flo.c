#include <stdio.h> 
int main()
{
  int i = 2;
  switch (i)
  {
   case 1:
     printf("statement 1");
     break;
     
   case 2:
       printf("Statement 3");
       break;
       
   default:
       printf("No valid i to switch to.");
       break;
       }
     return 0;
    }

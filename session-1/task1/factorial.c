
/*
 * Factorial
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int f[20];
    f[0] = 1;
    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    for(int i=1;i<20; ++i)
    {
      f[i] = 1;
      for(int j=1;j<=i; ++j)
      {
         f[i] = f[i]*j;
      } 
      print(f[i]);
    }
    return 0;
 }

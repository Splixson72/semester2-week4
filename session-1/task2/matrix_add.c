
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    for(int x = 0; x<4; ++x)
    {
      for(int y = 0;y<4;++y)
      {
         a[x,y] = 1;
         b[x,y] = 1;
      }
    }
    for(int x = 0; x<4; ++x)
    {
      for(int y = 0; y<4; ++y)
      {
         c[x,y] = a[x,y] + b[x,y];
         printf("a + b is %f", c[x,y]);
      }
    }
    return 0;
 }

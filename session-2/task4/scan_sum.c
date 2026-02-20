
#include <stdio.h>

int main( void ) {

    // define suitable data
    int a; int b;
    // use scanf to read from the terminal
    int count = scanf("%d + %d =", &a,&b);
    // print the output from scanf and the data values 
    printf("%d, %d, %d", count,a,b);
    return 0;
}
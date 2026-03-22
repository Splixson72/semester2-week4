
/*
Name:Zaryaab Ullah
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    // define appropriate data to hold your answer
    char input[100] = "";
    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++) { //goes though number of arguments
        strcat(input, argv[i]); //concatenation
        if (i < argc - 1) {
            strcat(input, "-"); //adds hyphens in between
        }
    }
    // use only this single print statement in your submitted code
    printf("%s\n", input);
}
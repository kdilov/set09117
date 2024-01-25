#include <stdio.h>

int main()
{
    // declare int variable integerVariable
    int integerVariable;
    double var;
    // declare a variable from an unasigned type  that represents the size of an object
    size_t size;
    // assign to size variable the result of the "sizeof" operator 
    // which returns the size in bytes of the variable or type
    size = sizeof(var);
    // print a message showing the size of the variable 
    printf("Size of Integer Variable is %zu bytes\n",size);
    
    char thing;

    printf("Size of Char Variable is %zu bytes \n",sizeof(thing));
    return 0;

}
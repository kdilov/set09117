#include <stdio.h>

int main()
{
    // declare int variable integerVariable
    int integerVar;
    double doubleVar;
    float floatVar;
    char charVar;
    // assign to size variable the result of the "sizeof" operator 
    // which returns the size in bytes of the variable or type
    
    printf("Size of Integer Variable is %zu bytes \n",sizeof(integerVar));
    printf("Size of Double Variable is %zu bytes \n",sizeof(doubleVar));
    printf("Size of Float Variable is %zu bytes \n",sizeof(floatVar));
    printf("Size of Char Variable is %zu bytes \n",sizeof(charVar));



    return 0;

}
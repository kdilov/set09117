#include<stdio.h>

int main(){

    char grade;

    printf("What's your grade?");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Perfect\n");
             break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Not bad \n");
            break;
        case 'D':
            printf("Almost fail\n");
            break;
        case 'F':
            printf("You failed\n");
            break;
        default:
            printf("Enter valid value\n");
            
    }

    return 0;
}
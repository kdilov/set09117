#include<stdio.h>

int main(){

    int age;

    printf("What's your age?");
    scanf("%d", &age);

    if(age>=18){
        printf("You are now signed up");
    }
    else if(age < 0 )
    {
        printf("something smells dodgy");
    }
    else if(age == 0 )
    {
        printf("You just born"); 
    }
    else{
        printf("You are too young to sgn up");
    }

    return 0;
}
#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
    int age;
    char name[25];

    printf("What's your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin);

    printf("How old are you?");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are singed up!");
    }
    else if(age < 0){
        printf("Enter a valid value");
    }
    else{
        printf("You are too young to sign up!");
    }
    return 0;
}
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

    printf("You are  %d years old and your name is %s", age,name);
}
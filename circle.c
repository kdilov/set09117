#include<stdio.h>

int main(){

    const double PI = 3.13159;
    double radius;
    double circumference;
    double area; 

    printf("Enter radius of a circle: ");
    scanf("%lf" , &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe circumference of that circle is: %lf", circumference);
    printf("\n area is : %lf", area);
   return 0;
}

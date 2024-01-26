#include <stdio.h>

#define NUM_MODULES 6 // Assuming there is 6 modules in the 1st year
int main(){
    int grades[NUM_MODULES]; //Array to store grades
    int i;
    
    // Input grades for each module using for loop
    for(i = 0; i < NUM_MODULES; i++){
        printf("Module %d ", i+1);
        scanf("%d", &grades[i]);
    }

    // Output the grades 
    printf("\n Your grades are: \n");
    for(i = 0;i < NUM_MODULES; i++){
        printf("Module %d : %d\n", i + 1, grades[i]);
    }


    printf("Size of Array is %zu bytes \n",sizeof(grades));
    size_t num = sizeof(grades) / sizeof(int);
    printf("Space for storing %zu elements \n", num);
    return 0;

}
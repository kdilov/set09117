#include<stdio.h>

#define MAX 6

// implementation of function prototypes
void display(int*);
void init(int*);
void insert(int*, int pos, int num);
void delete(int *, int pos);
void reverse(int*);
void search(int*, int num);

// search fucntion implementation
void search(int* array, int num)
{
    int idx;
    for(idx=0; idx<MAX; idx++)
    {
        if(array[idx] == num)
        {
            printf("%d found in position %d\n",num ,idx+1);
            return;
        }
    if(idx == MAX)
        printf("%d not found in array\n", num);    

    }

}

// reversing function implementation
void reverse(int* array)
{
    int idx;
    for(idx=0; idx<MAX/2; idx++)
    {
        int temp = array[idx];
        array[idx] = array[MAX-1-idx];
        array[MAX-1-idx] = temp; 

    }

}

// delete function implementation
void delete(int* array, int pos)
{
    int idx;
    for(idx = pos; idx<MAX; idx++)
    {
        array[idx-1] = array[idx];
    }
    array[idx-1] = 0;

}

// insert function implementation
void insert(int* array, int pos, int num)
{

    int idx;

    for(idx= MAX-1; idx>= pos; idx --)
    {
        array[idx] = array[idx-1];

    }
    array[idx] = num;

}

// init function implementation
    void init(int* array)
    {
        int idx;
        for(idx=0; idx<MAX; idx++)
        {
            array[idx]=0;
        }


    }

// display function implementation
void display(int* array)
{

    int idx;
    for(idx=0; idx<MAX; idx++)
    {
        printf("%d\t", idx);
    }

    printf("\n");

    for(idx=0; idx<MAX; idx++)
    {
        printf("%d\t", array[idx]);
    }
    printf("\n");
}

// main function
int main(void)
{

// declare the array
int array[MAX] ;

init(array);

// Insert soem data into the array
insert(array, 1 ,15);
insert(array, 2 ,16);
insert(array, 3 ,17);
insert(array, 4 ,18);
insert(array, 5 ,19);
insert(array, 6 ,20);

// Display contents
printf("Array Contents: \n");
display(array);

// Delete some data from the array
delete(array, 5);
delete(array, 1);

//Display after deletion
printf("Array Contents after deletion: \n");
display(array);

// Insert new data after deletion
insert(array, 5, 555);
insert(array, 2, 222);

// Display after new insertion
printf("Array Contents after inserting more data: \n");
display(array);

// Reverse the array
 reverse(array);

 // Display reversed array
 printf("Array Contents after reversing the array: \n");
 display(array);

 // Search the array
    search(array,222);
    search(array,555);

return 0;

}
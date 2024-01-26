#include<stdio.h>
#include<time.h>

void code()
{
    for(int i=0; i<10000; i++)
    {
        printf(".");
    }
    printf("\n");
}

int main()
{
    clock_t start, end;
    double cpu_time_used;

    printf("start: %d \n", (int) (start=clock()));

    for(int j; j<5 ; j++)
    {
    code();
    
    }
    cpu_time_used = ((double) (end - start))/CLOCKS_PER_SEC;
    printf("stop: %d \n", (int) (end=clock()-start));
    printf("Elapsed: %f secpnds\n", (double) end / CLOCKS_PER_SEC);
    

    return 0;
}
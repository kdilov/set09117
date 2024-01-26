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
    double cpu_time_used,average,elapsed;
    int num_runs;
    double total_time = 0.0;
    

    printf("start: %d \n", (int) (start=clock()));

    printf("How many times to run the function: \n");
    scanf("%d",&num_runs);

    for(int j; j<num_runs ; j++)
    {
    code();
    }
    
    printf("stop: %d \n", (int) (end=clock()-start));
    printf("Elapsed: %f seconds\n", (double) (elapsed= end / CLOCKS_PER_SEC));

    cpu_time_used = ((double) (end - start))/CLOCKS_PER_SEC;
    total_time += cpu_time_used;

    printf("Average: %f seconds \n",(double) (average= total_time/num_runs));
    printf("Start time:\t  End time:\t  Elapsed time:\t  Average time:\t \n");
    printf(" %d,\t\t  %d,\t\t  %f,\t\t %f",start,end,elapsed,average);
    

    return 0;
}
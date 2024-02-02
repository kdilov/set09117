#include<stdio.h>
#include<time.h>

void code(int num)
{
    for(int i=0; i<num; i++)
    {
        printf(".");
    }
    printf("\n");
}

int main()
{
    FILE *fp;
    clock_t t;
    double cpu_time_used,average,elapsed;
    int num_runs;
    double total_time = 0.0;
    
    // Open file for writing
    fp = fopen("output.csv", "a");
    if(fp ==NULL){
        printf("can not open file\n");
        return 1;
    }


    printf("start: %d \n", (int) (t=clock()));

    printf("How many times to run the function: \n");
    scanf("%d",&num_runs);

    code(num_runs);
    
    
    printf("stop: %d \n", (int) (t=clock()-t));
    
    printf("Elapsed: %lf seconds\n", elapsed=((double)t) / CLOCKS_PER_SEC );

    printf("Average: %.10lf seconds \n",average= elapsed/num_runs);
    printf("Times Code is Run: \t Elapsed time:\t  Average time:\t \n");
    printf("%d\t\t\t   %.10lf\t %.10lf\n",num_runs,elapsed,average);
    
    // Write the formatted data to the file
    fprintf(fp,"Times Code is Run:\t Elapsed time:\t  Average time:\t \n");
    fprintf(fp,"%d\t\t\t\t\t   %.10lf,\t\t %.10lf\n",num_runs,elapsed,average);

    fclose(fp);
    return 0;
}
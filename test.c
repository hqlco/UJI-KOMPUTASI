#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    clock_t start, end;
    start = clock();
    long long a = 1;
    for (long long i = 0; i < 1000000000; i++)
    {
        a = a + 1;
    }
    end = clock();
    double duration = ((double)end - start) / CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}

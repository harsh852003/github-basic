#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX_THREADS 4
typedef struct
{
    int start;
    int end;
    long long result;
} thread_data;
void *sum(void *arg)
{
    thread_data *data = (thread_data *)arg;
    data->result = 0;
    for (int i = data->start; i <= data->end; i++)
    {
        data->result += i;
    }
    pthread_exit(NULL);
}
int main()
{
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    pthread_t threads[MAX_THREADS];
    thread_data tdata[MAX_THREADS];
    long long total_sum = 0;
    int chunk_size = n / MAX_THREADS;
    for (int i = 0; i < MAX_THREADS; i++)
    {
        tdata[i].start = i * chunk_size + 1;
        tdata[i].end = (i + 1) * chunk_size;
        tdata[i].result = 0;

        int rc = pthread_create(&threads[i], NULL, sum, (void *)&tdata[i]);
        if (rc)
        {
            printf("Error: unable to create thread, %d\n", rc);
            return -1;
        }
    }
    for (int i = 0; i < MAX_THREADS; i++)
    {
        pthread_join(threads[i], NULL);
        total_sum += tdata[i].result;
    }
    printf("Sum of %d numbers is %lld.\n", n, total_sum);
    return 0;
}


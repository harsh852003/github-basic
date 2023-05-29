#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>



void *print_hello(void *arg)
{
    printf("Hello from thread %d!\n", *(int *)arg);
    return NULL;
}
int main()
{
    pthread_t threads[3];
    int thread_ids[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        int rc = pthread_create(&threads[i], NULL, print_hello, &thread_ids[i]);
        if (rc)
        {
            printf("Error: unable to create thread, %d\n", rc);
            return -1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        pthread_join(threads[i], NULL);
    }
    printf("All threads have completed. Exiting program.\n");
    return 0;
}

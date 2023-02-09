#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_resource = 0;

void *thread_func_1(void *arg)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        pthread_mutex_lock(&mutex);
        shared_resource++;
        printf("Watek 1 zablokowal zasob i zwiekszyl jego wartosc do %d\n", shared_resource);
        sleep(5); // Dodajemy b³¹d - opóŸnienie uwolnienia zasobu
        pthread_mutex_unlock(&mutex);
        printf("Watek 1 odblokowa³ zasob \n");
    }
    return NULL;
}

void *thread_func_2(void *arg)
{
    int i;
    for (i = 0; i < 100; i++)
    {
        pthread_mutex_lock(&mutex);
        shared_resource++;
        printf("Watek 2 zablokowal zasob i zwiekszyl jego wartosc do  %d\n", shared_resource);
        pthread_mutex_unlock(&mutex);

        printf("Watek 2 odblokowa³ zasob \n");
    }
    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, thread_func_1, NULL);
    pthread_create(&thread2, NULL, thread_func_2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Ostateczna wartosc udostepnionego zasobu: %d\n", shared_resource);
    return 0;
}

#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>

sem_t sem1;
sem_t sem2;

void *function1(void *arg)
{
    // W�tek 1 u�ywa semafora sem1 do synchronizacji
    sem_wait(&sem1);
    printf("Function 1\n");
    sem_post(&sem2);

    return NULL;
}

void *function2(void *arg)
{
    // W�tek 2 u�ywa semafora sem2 do synchronizacji
    sem_wait(&sem2);
    printf("Function 2\n");
    sem_post(&sem1);

    return NULL;
}

int main()
{
    pthread_t thread1, thread2;

    // Inicjalizujemy semafory
    sem_init(&sem1, 0, 0);
    sem_init(&sem2, 0, 1);

    // Tworzymy w�tki
    pthread_create(&thread1, NULL, function1, NULL);
    pthread_create(&thread2, NULL, function2, NULL);

    // Oczekujemy na zako�czenie w�tk�w
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}

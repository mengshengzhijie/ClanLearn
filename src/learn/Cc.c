//
// Created by xuxiao on 24-9-5.
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define NUM_THREADS 8 // 可以根据你的系统调整线程数量

typedef struct thread_data {
    int thread_id;
    double *result;
} thread_data_t;

void* compute(void *arg) {
    thread_data_t *data = (thread_data_t *) arg;
    double sum = 0.0;
    for (int i = 0; i < 100000000; i++) { // 每个线程进行1亿次计算
        sum += (i * 1.0 / (i + 1));
    }
    data->result[data->thread_id] = sum;
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    double results[NUM_THREADS];
    thread_data_t *args[NUM_THREADS];

    srand(time(NULL));

    for (int i = 0; i < NUM_THREADS; i++) {
        args[i] = (thread_data_t *) malloc(sizeof(thread_data_t));
        args[i]->thread_id = i;
        args[i]->result = results;
        if (pthread_create(&threads[i], NULL, compute, (void *) args[i])) {
            fprintf(stderr, "Error creating thread %d\n", i);
            return 1;
        }
    }

    void **status;
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], &status);
    }

    printf("Results:\n");
    for (int i = 0; i < NUM_THREADS; i++) {
        printf("Thread %d result: %.2f\n", i, results[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        free(args[i]);
    }

    return 0;
}
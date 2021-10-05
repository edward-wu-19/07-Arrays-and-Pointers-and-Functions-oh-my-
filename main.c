#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArray(int arr[], int length);
double average(int arr[], int length);
void copyArray(int A[], int B[], int length);

int main(){
    printf("Problem 1:\n");

    int grunt = 10;
    int ray[grunt], i;

    srand(time(NULL));
    for (i = 0; i < grunt; i++){
        ray[i] = rand();
    }

    printf("ray : ");
    printArray(ray, grunt);

    // ======================

    printf("\n\n");
    printf("Problem 2:\n");

    double avg;

    avg = average(ray, grunt);
    printf("Average : %f", avg);

    // ======================

    printf("\n\n");
    printf("Problem 3:\n");

    int raycopy[grunt];

    copyArray( ray, raycopy, grunt );

    printf("raycopy : ");
    printArray(raycopy, grunt);

    printf("\n");

    return 0;
}

// problem 1
void printArray(int arr[], int length){
    int i;
    printf("[ ");
    for (i = 0; i < length; i++){
        printf("%d ", *(arr + i));
    }

    printf("]");
}

// problem 2
double average(int arr[], int length){
    double sum = 0;
    int i;
    for (i = 0; i < length; i++){
        sum += arr[i];
    }
    sum /= length;
    return sum;
}

// problem 3
void copyArray(int A[], int B[], int length){
    int i;
    for (i = 0; i < length; i++){
        B[i] = A[i];
    }
}
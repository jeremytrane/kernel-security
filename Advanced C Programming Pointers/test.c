#include <stdio.h>

#define LENGTH 5

int data[LENGTH] = {
    20, 22, 24, 26, 28
};

int main(int argc, char** argv) {

    int *pi;
    int **ppi;

    for (int i = 0; i < LENGTH; i++) {
        printf("%d, ", data[i]);
    }

    pi = data;
    printf("\nValue of what pi points to: %d\n", *pi);
    printf("Address of what pi points to: %d\n", pi);
    printf("Addres of pi: %d\n", &pi);

    return 0;
}
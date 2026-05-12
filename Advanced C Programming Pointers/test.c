#include <stdio.h>

#define LENGTH 3

int data[LENGTH];

int main(int argc, char **argv) {

    int *pi;
    int **ppi;

    for (int i = 0; i < LENGTH ; i++) {
        data[i] = i;
    }

    for (int i = 0; i < LENGTH ; i++) {
        // printf("%d\n", data[i]);
    }

    pi = data;
    printf("%d\n", *pi);

    return 0;
}
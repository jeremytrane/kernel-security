#include <stdio.h>

#define LENGTH 5

int data[LENGTH] = {
    10, 30, 50, 70, 90
};

int main(int argc, char** argv) {

    int *pi;
    int **ppi;

    for (int i = 0; i < LENGTH; i++) {
        printf("%d, ", data[i]);
    }

    pi = data;
    pi += 2;
    printf("\nValue of what pi points to: %d\n", *pi);
    printf("Address of what pi points to: %p\n", (void*)pi);   // line 20
    printf("Address of pi: %p\n", (void*)&pi);                 // line 21

    ppi = pi;
    printf("\nValue of what ppi points to: %p\n", (void*)*ppi);  // line 24 — this is pi's value (addr of data)
    printf("Address of what ppi points to: %p\n", (void*)ppi); // line 25
    printf("Address of ppi: %p\n", (void*)&ppi);               // line 26

    return 0;
}
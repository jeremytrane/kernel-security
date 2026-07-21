#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int data;
} Element;

typedef struct {
    int size;
    int wr;
    int rd;
    Element *arr;
} CircularBuffer;

void init (CircularBuffer *cb, int size) {
    cb->size = size;
    cb->wr = 0;
    cb->rd = 0;
    cb->arr = (Element *)malloc(size * sizeof(Element));
    if (cb->arr == NULL) {
        exit(0);
    }
}

void push (CircularBuffer *cb, Element item) {
    if (cb->wr == cb->size && cb->wr==cb->rd) {
        printf("Buffer is full");
    } else {
        cb->arr[cb->wr] = item;
        cb->wr += 1;
        if (cb->wr == cb->size) {
            cb->wr = 0;
        }
    }

}
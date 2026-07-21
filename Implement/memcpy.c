#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *mem_cpy(void *dst, const void *src, int size);

int main(int argc, char *argv[]) {

    int src[] = {0, 1, 2, 3, 4, 5};
    int dst[100];

    mem_cpy(dst, src, sizeof(src));

    for (int i = 0; i < 6; i++) {
        printf("Value at dst[%d]=%d\n", i, dst[i]);
    }

    return 0;
}

void *mem_cpy(void *dst, const void *src, int size) {
    if (dst == NULL || src == NULL) {
        return NULL;
    }

    char *src_ptr = (char *)src;
    char *dst_ptr = (char *)dst;

    for (int i = 0; i < size; i++) {
        dst_ptr[i] = src_ptr[i];

    }

    return dst;

}
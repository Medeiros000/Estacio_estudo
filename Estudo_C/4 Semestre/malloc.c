#include<stdlib.h>

// void * malloc(size_t size);

// void free(void * ptr);

// void * realloc(void * ptr, size_t newsize);

int main() {
    int *p;
    p = (int *) malloc(sizeof(int));
    *p = 1000;
    printf("%d\n", *p);
    free(p);
    p = NULL; // Opcional

    system("pause");
    return 0;
}
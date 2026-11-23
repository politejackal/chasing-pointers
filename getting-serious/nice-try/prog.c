#include <stdio.h>

void swap(int *a, int *b) {
    int *tmp = a;
    a = b;
    b = tmp;
}

int main(void) {
    int x = 7;
    int z = 3;

    swap(&x, &z);

    printf("%d %d\n", x, z);
    return 0;
}

#include <stdio.h>

int main(void) {
    int x = 5;
    int* y, z;

    y = &x;
    z = *y;
    *y = 10;

    printf("%d\n", z);
    return 0;
}

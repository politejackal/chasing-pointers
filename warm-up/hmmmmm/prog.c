#include <stdio.h>

int main(void) {
    int x = 7;
    int *y = &x;

    *y = 10;

    printf("%d\n", x);
    return 0;
}

#include <stdio.h>

int main(void) {
    int x = 5;
    int *y = &x;

    *y++;

    printf("%d\n", x);
    return 0;
}

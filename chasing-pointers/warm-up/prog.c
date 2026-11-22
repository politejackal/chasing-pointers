#include <stdio.h>

int main(void) {
    int treat = 7;
    int *paw = &treat;

    *paw = *paw * 6;

    printf("%d\n", treat);
    return 0;
}

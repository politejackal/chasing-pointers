#include <stdio.h>

int main(void)
{
    int x = 42;
    int y = 99;
    int *p = &x;

    printf("%p\n", (void *)p);
    return 0;
}

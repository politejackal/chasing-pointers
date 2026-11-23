#include <stdio.h>

int main(void) {
    char a[] = "pwn";
    char b[] = "pwn";

    if (a == b)
        printf("Equal\n");
    else
        printf("Not equal\n");
    return 0;
}

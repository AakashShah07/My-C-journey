#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20];
    char *pointer;
    char *pointer2;

    strcpy(str_a, "Hello world!\n");
    pointer = str_a;
    printf("%s", pointer);

    pointer2 = pointer + 2;  // Initialize pointer2 to point 2 characters ahead of pointer
    printf("%s", pointer2);

    strcpy(pointer2, "y you guys!\n");
    printf("%s", pointer);

    return 0;
}

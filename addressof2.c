#include <stdio.h>

int main() {
    int a = 5;
    int *ptr;

    ptr = &a;

    printf("a = 0x%08x\n", a);          // Correct format specifier for printing an integer in hexadecimal.
    printf("&ptr = %p\n", (void*)&ptr);  // Using %p to print the address of the pointer (properly casted to void*).
    printf("*ptr = 0x%08x\n\n", *ptr);   // Correct format specifier for printing the dereferenced pointer value in hexadecimal.

    return 0;
}

#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your name: ");
    // Read up to 49 characters + null terminator
    fgets(name, sizeof(name), stdin);

    // name will include the newline character from input
    printf("Hello, %s", name);

    return 0;
}
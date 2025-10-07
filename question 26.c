#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    strrev(str); // available in many compilers; otherwise use loop
    printf("Reversed string: %s\n", str);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
        str[i] = tolower(str[i]);

    printf("Lowercase string: %s\n", str);
    return 0;
}
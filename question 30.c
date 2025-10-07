#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("\nReversed string vertically:\n");
    for(int i=strlen(str)-1; i>=0; i--)
        printf("%c\n", str[i]);
    return 0;
}
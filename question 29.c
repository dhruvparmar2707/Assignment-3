#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("\nCharacters vertically:\n");
    for(int i=0; str[i]!='\0'; i++)
        printf("%c\n", str[i]);
    return 0;
}
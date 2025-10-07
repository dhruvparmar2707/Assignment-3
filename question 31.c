#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int a=0,e=0,i_=0,o=0,u=0;
    printf("Enter a string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch=='a') a++;
        else if(ch=='e') e++;
        else if(ch=='i') i_++;
        else if(ch=='o') o++;
        else if(ch=='u') u++;
    }

    printf("\nVowel frequencies:\n");
    printf("A/a = %d\nE/e = %d\nI/i = %d\nO/o = %d\nU/u = %d\n", a, e, i_, o, u);
    return 0;
}
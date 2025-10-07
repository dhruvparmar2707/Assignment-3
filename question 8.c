#include <stdio.h>

int main() {
    int a[5], b[10] = {0};
    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<5;i++)
        b[i*2] = a[i]; // skip one position

    printf("\nCopied array:\n");
    for(int i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
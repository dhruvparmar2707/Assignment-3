#include <stdio.h>

int main() {
    int arr[10], n, val, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to search: ");
    scanf("%d",&val);

    for(int i=0;i<n;i++)
        if(arr[i]==val) {
            printf("\nValue found at position %d", i);
            found=1;
            break;
        }

    if(!found)
        printf("\nValue not found!");
    return 0;
}
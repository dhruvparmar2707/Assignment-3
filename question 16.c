#include <stdio.h>

int main() {
    int arr[10], n, pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter position to delete (0-%d): ", n-1);
    scanf("%d",&pos);

    for(int i=pos;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;

    printf("\nAfter deletion:\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
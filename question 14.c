#include <stdio.h>

int main() {
    int arr[10], n, val;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to insert at end: ");
    scanf("%d",&val);

    arr[n]=val;
    n++;

    printf("\nUpdated array:\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
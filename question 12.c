#include <stdio.h>

int main() {
    int arr[10], n, val;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to insert at beginning: ");
    scanf("%d",&val);

    for(int i=n;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=val;
    n++;

    printf("\nUpdated array:\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
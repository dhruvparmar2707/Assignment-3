#include <stdio.h>

int main() {
    int arr[10], n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter position (0-%d): ", n);
    scanf("%d",&pos);
    printf("Enter value to insert: ");
    scanf("%d",&val);

    for(int i=n;i>pos;i--)
        arr[i]=arr[i-1];
    arr[pos]=val;
    n++;

    printf("\nUpdated array:\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
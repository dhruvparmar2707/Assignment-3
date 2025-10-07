#include <stdio.h>

int main() {
    int arr[10], n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    n--; // remove last
    printf("\nAfter deleting last value:\n");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
#include <stdio.h>

int main() {
    int arr[10], n, val, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to delete: ");
    scanf("%d",&val);

    for(int i=0;i<n;i++) {
        if(arr[i]==val) {
            for(int j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n--;
            found=1;
            break;
        }
    }

    if(found) {
        printf("\nAfter deletion:\n");
        for(int i=0;i<n;i++) printf("%d ",arr[i]);
    } else
        printf("\nValue not found!");
    return 0;
}
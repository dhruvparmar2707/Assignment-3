#include <stdio.h>

int main() {
    int arr[10], temp[10], n, dir;
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    printf("Enter shift count: ");
    scanf("%d",&n);
    printf("Enter direction (1=Right, 0=Left): ");
    scanf("%d",&dir);

    for(int i=0;i<10;i++) {
        int newIndex;
        if(dir==1)
            newIndex = (i + n) % 10;
        else
            newIndex = (i - n + 10) % 10;
        temp[newIndex] = arr[i];
    }

    printf("\nShifted array:\n");
    for(int i=0;i<10;i++)
        printf("%d ", temp[i]);
    return 0;
}
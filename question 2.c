#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 values:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("\n4th = %d, 7th = %d, 9th = %d", arr[3], arr[6], arr[8]);
    return 0;
}
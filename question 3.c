#include <stdio.h>

int main() {
    int arr[5], temp;
    printf("Enter 5 values:\n");
    for(int i=0; i<5; i++)
   scanf("%d", &arr[i]);
    for(int i=0; i<5; i++)
     for(int j=i+1; j<5; j++)
      if(arr[i] > arr[j]) {
                temp = arr[i];
       arr[i] = arr[j];
           arr[j] = temp;
            }

    printf("\nAscending order: ");
    for(int i=0; i<5; i++) printf("%d ", arr[i]);

    printf("\nDescending order: ");
    for(int i=4; i>=0; i--) printf("%d ", arr[i]);
    return 0;
}
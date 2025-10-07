#include <stdio.h>

int main() {
    int arr[10], freq[10], visited=-1;
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<10;i++) {
        int count=1;
        for(int j=i+1;j<10;j++) {
            if(arr[i]==arr[j]) {
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }

    printf("\nFrequency of each element:\n");
    for(int i=0;i<10;i++)
        if(freq[i]!=visited)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    return 0;
}
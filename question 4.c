#include <stdio.h>

int main() {
    int amount, notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\nMinimum notes:\n");
    for(int i=0; i<9; i++) {
        int count = amount / notes[i];
        amount %= notes[i];
        if(count > 0)
            printf("%d × %d\n", count, notes[i]);
    }
    return 0;
}
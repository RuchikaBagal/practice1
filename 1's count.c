#include <stdio.h>

int countOnesInBinary(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2; // Divide by 2 to move to the next binary digit
    }
    return count;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        int onesCount = countOnesInBinary(num);
        printf("Number of 1's in binary representation of %d is: %d\n", num, onesCount);
    }

    return 0;
}

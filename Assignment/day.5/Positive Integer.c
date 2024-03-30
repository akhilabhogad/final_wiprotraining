
#include <stdio.h>

int main() {
    int N, digit, sum = 0, product = 1;

    // Read the number
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Calculate sum and product of digits
    int originalNumber = N; // Store the original number to print later
    while (N > 0) {
        digit = N % 10;
        sum += digit;
        if (digit != 0) // Exclude multiplication by 0
            product *= digit;
        N /= 10;
    }

    // Print the sum and product
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}

// assignment Question: 4



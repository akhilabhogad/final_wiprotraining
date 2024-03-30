#include <stdio.h>
int isDivisible(int num) {
    int even_product = 1;
    int odd_sum = 0;
    int digit, position = 1;

    while (num > 0) {
        digit = num % 10;
        if (position % 2 == 0) {
            even_product *= digit;
        } else {
            odd_sum += digit;
        }
        num /= 10;
        position++;
    }

    return even_product % odd_sum == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDivisible(num)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}

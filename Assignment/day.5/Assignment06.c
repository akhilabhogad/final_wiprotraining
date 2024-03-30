#include <stdio.h>

int isProductEqual(int num) {
    int even_product = 1;
    int odd_product = 1;
    int digit, position = 1;

    while (num > 0) {
        digit = num % 10;
        if (position % 2 == 0) {
            even_product *= digit;
        } else {
            odd_product *= digit;
        }
        num /= 10;
        position++;
    }

    return even_product == odd_product;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isProductEqual(num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

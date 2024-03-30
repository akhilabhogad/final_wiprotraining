#include <stdio.h>

void printIncrementingSquaredNumberStarPattern(int N) {
    int num = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", num++);
            if (j != N - 1)
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 2 || N > 10) {
        printf("Invalid input! N should be between 2 and 10.\n");
        return 1;
    }

    printIncrementingSquaredNumberStarPattern(N);

    return 0;
}

// assignment Question: 1


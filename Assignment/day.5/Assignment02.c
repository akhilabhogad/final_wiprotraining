
#include <stdio.h>

void printNumberStarRightTrianglePattern(int N) {
    int num = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
            if (j != i)
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

    printNumberStarRightTrianglePattern(N);

    return 0;
}

//assignment Question: 2

#include <stdio.h>

void printAlphabetTriangle(int N) {
    int spaces, i, j;
    char currentChar;

    for (i = 1; i <= N; i++) {
        // Print spaces
        for (spaces = i; spaces < N; spaces++) {
            printf("  "); // Two spaces for each character
        }

        // Print increasing characters
        currentChar = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", currentChar++);
            if (j != i)
                printf(" ");
        }

        // Print decreasing characters
        currentChar -= 2;
        for (j = 1; j < i; j++) {
            printf(" %c", currentChar--);
        }

        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Invalid input! N should be greater than 0.\n");
        return 1;
    }

    printAlphabetTriangle(N);

    return 0;
}

//assignment Question: 3

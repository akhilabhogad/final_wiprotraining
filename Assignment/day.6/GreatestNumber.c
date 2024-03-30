#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);

    printf("The greatest number in the list is: %d\n", max);

    return 0;
}

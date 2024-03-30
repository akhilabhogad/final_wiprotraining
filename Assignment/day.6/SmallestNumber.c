#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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

    int min = findMin(arr, size);

    printf("The smallest number in the list is: %d\n", min);

    return 0;
}

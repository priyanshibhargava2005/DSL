#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid; // Element found, return its index
        } else if (arr[mid] > key) {
            // Key is in the left half of the array
            return binarySearch(arr, low, mid - 1, key);
        } else {
            // Key is in the right half of the array
            return binarySearch(arr, mid + 1, high, key);
        }
    }
    
    return -1; // Element not found
}

int main() {
    int n, arr[100], key;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element found at position %d\n", result + 1);
    } else {
        printf("Sorry! Element not found\n");
    }

    return 0;
}
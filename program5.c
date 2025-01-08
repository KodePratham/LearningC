#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;
    
    // Swap the elements from start to end until they meet in the middle
    while (start < end) {
        // Swap elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the indices towards the center
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    // Take array size input from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array
    reverseArray(arr, n);
    
    // Print the reversed array
    printf("Reversed array: ");
    printArray(arr, n);
    
    return 0;
}

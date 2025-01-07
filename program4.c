#include <stdio.h>

int main() {
    int n, i;
    int num, min;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ask user for the first number and initialize min with it
    if (n > 0) {
        printf("Enter number 1: ");
        scanf("%d", &num);
        min = num;  // Set the first number as the minimum initially

        // Loop through the remaining numbers and find the minimum
        for (i = 2; i <= n; i++) {
            printf("Enter number %d: ", i);
            scanf("%d", &num);

            // Update the minimum if the current number is smaller
            if (num < min) {
                min = num;
            }
        }

        // Display the minimum number
        printf("The minimum number is: %d\n", min);
    } else {
        printf("Please enter a valid number of elements.\n");
    }

    return 0;
}

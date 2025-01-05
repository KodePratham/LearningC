#include <stdio.h>

int main() {
    int choice, number, i, factorial, isPrime;

    // Infinite loop to keep showing the menu until the user chooses to exit
    while (1) {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Check Prime Number\n");
        printf("3. Exit\n");

        // Prompt user to enter their choice
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Task 1: Calculate the factorial of a number
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &number);
            
            // Initialize factorial as 1
            factorial = 1;
            
            // Loop to calculate factorial
            for (i = 1; i <= number; i++) {
                factorial *= i;
            }
            // Display the result
            printf("The factorial of %d is %d\n", number, factorial);
        }
        else if (choice == 2) {
            // Task 2: Check if a number is prime
            printf("Enter a number to check if it is prime: ");
            scanf("%d", &number);
            
            if (number <= 1) {
                // Numbers less than or equal to 1 are not prime
                printf("%d is not a prime number.\n", number);
            }
            else {
                // Assume the number is prime
                isPrime = 1;
                
                // Loop to check divisibility
                for (i = 2; i < number; i++) {
                    if (number % i == 0) {
                        isPrime = 0; // The number is divisible, so it's not prime
                        break;
                    }
                }
                
                // Display the result based on isPrime flag
                if (isPrime == 1) {
                    printf("%d is a prime number.\n", number);
                } else {
                    printf("%d is not a prime number.\n", number);
                }
            }
        }
        else if (choice == 3) {
            // Exit the program
            printf("Exiting the program.\n");
            break;
        }
        else {
            // Invalid choice entered
            printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}

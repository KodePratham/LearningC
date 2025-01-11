#include <stdio.h>

int main() {
    char str[100];  // Declare a string array with a maximum size of 100
    int length = 0;

    // Ask user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to read a line including spaces

    // Loop to calculate the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;  // Increment length for each character in the string
    }

    printf("Length of the entered string is: %d\n", length);

    return 0;
}

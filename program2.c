#include <stdio.h>
#include <math.h>

// Function to check whether a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);
}

// Function to check whether a number is prime or not
void checkPrime(int num) {
    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
        return;
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d is not a Prime number.\n", num);
            return;
        }
    }
    printf("%d is a Prime number.\n", num);
}

// Function to convert a decimal number to binary
void decimalToBinary(int num) {
    // Handle the special case where num is 0
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32];  // Array to store binary number (up to 32 bits)
    int i = 0;
    
    // Convert the number to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert a binary number (as a string) to decimal
int binaryToDecimal(const char *binaryStr) {
    int decimal = 0;
    int length = 0;
    
    // Find the length of the binary string
    while (binaryStr[length] != '\0') {
        length++;
    }

    // Convert binary to decimal by iterating over the string
    for (int i = 0; i < length; i++) {
        if (binaryStr[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    return decimal;
}

// Main function to test the above functionalities
int main() {
    int num, decimal;
    char binaryStr[32];  // String to store binary input

    // Input and check even or odd
    printf("Enter an integer to check even or odd: ");
    scanf("%d", &num);
    checkEvenOdd(num);

    // Input and check prime or non-prime
    printf("Enter an integer to check prime or non-prime: ");
    scanf("%d", &num);
    checkPrime(num);

    // Input and convert decimal to binary
    printf("Enter a decimal number to convert to binary: ");
    scanf("%d", &num);
    decimalToBinary(num);

    // Input and convert binary to decimal
    printf("Enter a binary number (as a string) to convert to decimal: ");
    scanf("%s", binaryStr);
    decimal = binaryToDecimal(binaryStr);
    printf("Decimal: %d\n", decimal);

    return 0;
}

#include <stdio.h>
#include <math.h>

// Function to find roots of the quadratic equation
void findRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c; // Calculate discriminant

    if (discriminant > 0) {
        // Two real and distinct roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (repeated root)
        float root = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;

    // User input for coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if 'a' is zero (not a quadratic equation)
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
    } else {
        // Call function to find the roots
        findRoots(a, b, c);
    }

    return 0;
}

#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int findHCF(int a, int b) {
    // Loop until b becomes 0
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Take input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to find HCF
    int hcf = findHCF(num1, num2);

    // Output the result
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}



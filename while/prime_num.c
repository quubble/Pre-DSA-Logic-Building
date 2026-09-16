#include <stdio.h>
#include <stdbool.h>

// Function to check whether a number is prime
bool isPrimeNumber(int n) {
    int i = 2;

    if (n < 2) {
        return false;
    }

    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }

    return true;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrimeNumber(n))
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

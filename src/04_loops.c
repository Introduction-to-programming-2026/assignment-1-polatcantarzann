#include <stdio.h>

int main(void) {
    int n = 0;

    // TODO 1: keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        if (scanf("%d", &n) != 1) {
            // If user enters a letter, clear input buffer
            while (getchar() != '\n');
        }
    }

    printf("\n=== Counting ===\n");
    // TODO 2: print 1..n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== Sum 1..n ===\n");
    // TODO 3: compute sum
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    printf("\n=== Factorial n! ===\n");
    // TODO 4: compute factorial
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is: %llu\n", n, fact);

    return 0;
}
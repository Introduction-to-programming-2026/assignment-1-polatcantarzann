#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Cannot divide by zero.\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater\n");
    } else if (b > a) {
        printf("b is greater\n");
    } else {
        printf("they are equal\n");
    }

    printf("\n=== Logical checks ===\n");
    // BOTH positive?
    if (a > 0 && b > 0) {
        printf("Both are positive\n");
    }
    // AT LEAST one negative?
    if (a < 0 || b < 0) {
        printf("At least one is negative\n");
    }

    return 0;
}
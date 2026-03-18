#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // TODO 1: Check argc - Program name + 3 arguments = 4
    if (argc != 4) {
        printf("Usage: ./05_command_line <operation> <num1> <num2>\n");
        return 1;
    }

    // TODO 2: Parse operation and numbers
    char *op = argv[1];
    long a = strtol(argv[2], NULL, 10);
    long b = strtol(argv[3], NULL, 10);

    // TODO 3-5: Implement operations
    if (strcmp(op, "add") == 0) {
        printf("Result: %ld\n", a + b);
    } 
    else if (strcmp(op, "sub") == 0) {
        printf("Result: %ld\n", a - b);
    } 
    else if (strcmp(op, "mul") == 0) {
        printf("Result: %ld\n", a * b);
    } 
    else if (strcmp(op, "div") == 0) {
        if (b == 0) {
            printf("Error: Division by zero.\n");
        } else {
            printf("Result: %ld\n", a / b);
        }
    } 
    else {
        printf("Unknown operation\n");
    }

    return 0;
}
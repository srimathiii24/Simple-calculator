#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Result = %.2f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Result = %.2f\n", result);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Divide by zero not allowed.\n");
                } else {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (1);

    return 0;
}

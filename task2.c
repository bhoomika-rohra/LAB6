#include <stdio.h>

int main() {
    int a, b, choice, i, result;

    printf("Enter 1 for multiply and 2 for divide: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (choice == 1) {
        result = 0;
        for (i = 0; i < b; i++) {
            result += a;
        }
        printf("Multiplication is: %d\n", result);
    }
    else if (choice == 2) {
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        }
        else {
            int count = 0;
            
            while (a >= b) {
                a-= b;
                count++;
            }
            printf("Division is: %d\n", count);
        }
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

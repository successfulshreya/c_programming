
#include <stdio.h>

int main(void)
{
    int a, b;

    // Taking two inputs from the user
    printf("Enter two numbers: ");

    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient: %d\n", a / b);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

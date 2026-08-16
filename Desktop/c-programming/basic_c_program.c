#include <stdio.h>

int main() {

    // 1. Hello World
    printf("Hello, World!\n\n");

    // 2. Variables and Data Types
    int a = 20;
    int b = 10;
    float marks = 85.5;
    char grade = 'A';

    printf("Variables and Data Types:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n\n", grade);

    // 3. User Input
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // 4. Arithmetic Operators
    printf("\nArithmetic Operators:\n");
    printf("Addition       = %d\n", x + y);
    printf("Subtraction    = %d\n", x - y);
    printf("Multiplication = %d\n", x * y);
    printf("Division       = %d\n", x / y);
    printf("Modulus        = %d\n", x % y);

    // 5. Relational Operators
    printf("\nRelational Operators:\n");
    printf("x > y  = %d\n", x > y);
    printf("x < y  = %d\n", x < y);
    printf("x >= y = %d\n", x >= y);
    printf("x <= y = %d\n", x <= y);
    printf("x == y = %d\n", x == y);
    printf("x != y = %d\n", x != y);

    // 6. Logical Operators
    printf("\nLogical Operators:\n");
    printf("(x > 0 && y > 0) = %d\n", x > 0 && y > 0);
    printf("(x > 0 || y > 0) = %d\n", x > 0 || y > 0);
    printf("!(x > 0) = %d\n", !(x > 0));

    // 7. Assignment Operators
    int n = 10;

    printf("\nAssignment Operators:\n");
    printf("n = %d\n", n);

    n += 5;
    printf("n += 5  -> %d\n", n);

    n -= 3;
    printf("n -= 3  -> %d\n", n);

    n *= 2;
    printf("n *= 2  -> %d\n", n);

    n /= 4;
    printf("n /= 4  -> %d\n", n);

    // 8. Increment and Decrement
    printf("\nIncrement and Decrement:\n");

    n++;
    printf("After Increment = %d\n", n);

    n--;
    printf("After Decrement = %d\n", n);

    return 0;
}
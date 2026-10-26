
#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("ENTER FIRST NUMBER: ");
    scanf("%f", &a);

    printf("ENTER OPERATOR (+ - * /): ");
    scanf(" %c", &op);

    printf("ENTER SECOND NUMBER: ");
    scanf("%f", &b);

    switch (op)
    {
        case '+':
            printf("RESULT = %.2f\n", a + b);
            break;

        case '-':
            printf("RESULT = %.2f\n", a - b);
            break;

        case '*':
            printf("RESULT = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("RESULT = %.2f\n", a / b);
            else
                printf("CANNOT DIVIDE BY ZERO.\n");
            break;

        default:
            printf("INVALID OPERATOR.\n");
    }

    return 0;
}

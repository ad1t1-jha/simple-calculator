#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    printf("Enter an operator: (+, -, *, /)");
    scanf(" %c", &op);

    printf("\nEnter the first and second number: ");
    scanf("%lf, %lf", &num1, &num2);

    switch (op){
    case '+':
        result = num1 + num2;
        printf("%f", result);
        break;

    case '-':
        result = num1 - num2;
        printf("%f", result);
        break;

    case '*':
        result = num1 * num2;
        printf("%f", result);
        break;

    case '/':
        result = num1 / num2;
        printf("%f", result);
        break;

    default:
        printf("Please enter any of the following operators: +, -, *, /");

    }
    return 0;
}

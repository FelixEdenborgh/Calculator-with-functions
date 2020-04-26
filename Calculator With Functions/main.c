#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to calculator 2.0!\n");
    int num1, num2;
    char op;
    float result = 0;

    printf("Enter an operation + - * / %\n: ");
    scanf("%s", &op);

    printf("Enter your first number: \n");
    scanf("%d", num1);

    printf("Enter your secound number: \n");
    scanf("%d", num2);
    operation(op, num1, num2);
    operation();


    return 0;
}

int operation(char op, int a, int b){
    float result = 0;
    switch(op){
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
    case '/':
        result = a / b;
    case '%':
        result = a % b;
    default:
        prinf("You did something wrong");

    }
    printf("Result: %d %c %d = %f", a,op,b,result);
    return result;
}



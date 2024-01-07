#include <stdio.h>

int calculator()
{
    char operator;
    double nbrA, nbrB;

    // input for nbrA
    printf("Enter an operator (+, /, -, *) ");
    scanf("%c", &operator);

    // input for nbrB
    printf("Enter two operands ;");
    scanf("%lf %lf", &nbrA, &nbrB);

    // Switch work like if/else/elseif
    switch (operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", nbrA, nbrB, nbrA + nbrB);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", nbrA, nbrB, nbrA - nbrB);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", nbrA, nbrB, nbrA * nbrB);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", nbrA, nbrB, nbrA / nbrB);
            break;
        
        default:
            printf("operator incorrect.");
            break;
    }

    return 0;
}

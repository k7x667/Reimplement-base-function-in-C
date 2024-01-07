#include <stdio.h>

int calculator()
{
    char operator;
    double nbrA, nbrB;

    printf("Enter an operator (+, /, -, *) ");
    scanf("%c", &operator);

    printf("Enter two operands ;");
    scanf("%lf %lf", &nbrA, &nbrB);

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
        printf("operator incorrect");
    }

    return 0;
}

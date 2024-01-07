#include <stdio.h>

int main()
{
    char o;
    double a, b;

    printf("Enter an operator (+, /, -, *) ");
    scanf("%c", &o);

    printf("Enter two operands ;");
    scanf("%lf %lf", &a, &b);

    switch (o)
    {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    
    default:
        printf('operator incorrect');
    }

    return 0;
}

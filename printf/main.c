#include <stdio.h>
#include <stdarg.h>

void newPrintf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 's':
                    printf("%s", va_arg(args, char *));
                    break;
                case 'c':
                    printf("%c", va_arg(args, int)); 
                    break;
                default:
                    putchar('%');
                    putchar(*format);
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    newPrintf("Hello, %s! The answer is %d. Character: %c\n", "world", 42, 'A');
    return 0;
}

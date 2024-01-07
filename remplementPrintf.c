#include <unistd.h> // write import function

void newPrintf(const char *str) {
    while (str) {
        write(1, str, 1);
        str++;
    }
}

int main() {
    newPrintf("Hello world!");
    return 0;
}
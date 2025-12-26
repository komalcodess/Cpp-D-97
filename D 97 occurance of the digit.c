#include <stdio.h>

int countDigit(int n, int digit) {
    if (n == 0)
        return 0;
    if (n % 10 == digit)
        return 1 + countDigit(n / 10, digit);
    return countDigit(n / 10, digit);
}

int main() {
    int n = 122333;
    int digit = 3;
    printf("Count = %d", countDigit(n, digit));
    return 0;
}

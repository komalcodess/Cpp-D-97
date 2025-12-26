#include <stdio.h>

void printTable(int n, int i) {
    if (i > 10)
        return;
    printf("%d x %d = %d\n", n, i, n * i);
    printTable(n, i + 1);
}

int main() {
    printTable(5, 1);
    return 0;
}

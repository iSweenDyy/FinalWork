#include <stdio.h>
int main() {
    int a1;
    int b;
    int c;
    a1 = 5;
    b = 10;
    c = a1 + b;
    // проверка: является ли переменная a1 положительной
    if (a1 > 0) {
        printf("Переменная a1 положительная\n");
    }
    printf("%d\n", c);
    return 0;
}
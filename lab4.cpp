#include <stdio.h>

int main() {
    int a1;
    int b;
    int c;
    
    a1 = 5;
    b = 10;
    c = a1 + b;
    

    if (a1 > 0) {
        printf("Переменная a1 положительная\n");
    }
    
    printf("%d\n", c);
    

    double arr[30];
    

    for (int i = 0; i < 30; i++) {
        arr[i] = i;
    }
    

    printf("Массив из 30 элементов:\n");
    for (int i = 0; i < 30; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
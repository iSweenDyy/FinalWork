#include <stdio.h>
#include <math.h>  

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
    
    
    printf("значения sin ");
    for (int i = 0; i < 30; i++) {
        arr[i] = sin(i);  
        printf("Итерация %d: sin(%d) = %.4f\n", i, i, arr[i]); 
    }
    
  
    printf("\nМассив в строку:\n");
    for (int i = 0; i < 30; i++) {
        printf("%.4f ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;

    printf("Введите количество рядов n, введите -1 для выхода: ");

    if (scanf("%d", &n) != 1 || n == -1) {
        printf("Спасибо за сеанс!\n");
        return 0;
    }
    
    double x;
    
    printf("Введите аргумент функции: ");
    scanf("%lf", &x);

    double def = log(1+x);

    double total = 0;
    double element = x;

    for (int i = 1; i <= n; i++) {
        double newElement = element / i;

        total += newElement;

        printf("Член №%d; Маклорен: %lf; Обычный log(1+x): %lf\n", i, total, def);

        element *= -x;
    }

    return 0;
}

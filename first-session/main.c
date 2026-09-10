#include <stdio.h>
#include <stdbool.h>

int sumOdd(int number) {
    int arr[2] = {0, 0};
    int index = 0;
    
    while (number > 0) {
        arr[index % 2] += number % 10;
        number /= 10;

        index++;
    }

    if (index % 2) return arr[1];
    return arr[0];
}

int main(void) {
    while (true) {
        int number;

        printf("Введите число, введите 0 для выхода: ");
        scanf("%d", &number);

        if (number == 0) {
            printf("Спасибо за сеанс!");
            return 0;
        }

        printf("Результат: %d\n", sumOdd(number));
    }

    return 0;
}
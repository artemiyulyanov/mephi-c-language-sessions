#include <stdio.h>
#include <stdbool.h>

int reverseNumber(int number) {
    int res = 0;

    while (number > 0) {
        int reminder = number % 10;
        res = (res * 10) + reminder;

        number /= 10;
    }

    return res;
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

        printf("Перевернутое число: %d\n", reverseNumber(number));
    }

    return 0;
}
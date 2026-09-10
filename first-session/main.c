#include <stdio.h>
#include <stdbool.h>

int main(void) {
    while (true) {
        int number;

        printf("Введите число, введите 0 для выхода: ");
        scanf("%d", &number);

        if (number == 0) {
            printf("Спасибо за сеанс!");
            return 0;
        }

        int sums[2] = {0, 0};
        int counts[2] = {0, 0};

        int index = 0;
        
        while (number > 0) {
            sums[index % 2] += number % 10;
            counts[index % 2]++;

            number /= 10;

            index++;
        }

        int res, count;

        if (index % 2) {
            res = sums[1];
            count = counts[1];

        } else {
            res = sums[0];
            count = counts[0];
        }

        printf("Результат: сумма: %d; кол-во: %d\n", res, count);
    }

    return 0;
}
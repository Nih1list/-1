#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    // Якщо x дорівнює y, немає потреби виконувати жоден крок
    if (x == y) {
        return 0;
    }
    // Якщо різниця між x та y дорівнює 1 або 2, потрібен лише один крок
    else if (y - x == 1 || y - x == 2) {
        return 1;
    }

    int stepCount = 2; // Початкова кількість кроків
    int a = 1, b = 2, c = 3; // Початкові значення для послідовності Фібоначчі

    // Обчислення кількості кроків за допомогою ряду Фібоначчі
    while (c <= y - x) {
        a = b;
        b = c;
        c = a + b;
        stepCount++;
    }

    return stepCount;
}

int main() {
    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);

    return 0;
}

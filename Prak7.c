#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculateIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Відстань між центрами кола
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Перевірка взаємного розташування кола
    if (distance > r1 + r2) {
        return 0; // Кола не перетинаються, немає точок перетину
    } else if (distance < abs(r1 - r2)) {
        return 0; // Одне коло знаходиться всередині іншого, немає точок перетину
    } else if (distance == 0 && r1 == r2) {
        return -1; // Кола співпадають, точок перетину безкінечно багато
    } else {
        return 2; // Кола перетинаються в двох точках
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Введіть координати центра першого кола (x1, y1): "); // Ввід координати центра
    scanf("%d %d", &x1, &y1);
    printf("Введіть радіус першого кола (r1): "); //Ввід радіуса 1
    scanf("%d", &r1);

    printf("Введіть координати центра другого кола (x2, y2): "); // Ввід координати центра
    scanf("%d %d", &x2, &y2);
    printf("Введіть радіус другого кола (r2): "); //Ввід радіуса 2
    scanf("%d", &r2);

    // Обчислюємо кількість точок перетину викликом функції calculateIntersectionPoints
    int intersectionPoints = calculateIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // Виводимо результат
    if (intersectionPoints == 0) {
        printf("Кількість точок перетину: 0\n");
    } else if (intersectionPoints == -1) {
        printf("Кількість точок перетину: -1 (безкінечно багато)\n");
    } else {
        printf("Кількість точок перетину: 2\n");
    }

    return 0;
}

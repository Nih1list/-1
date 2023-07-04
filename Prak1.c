#include <stdio.h>

int main() {
    int t1, t2, t3;
    float sum, time;

    // Зчитуємо значення t1, t2 і t3
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислюємо суму
    sum = t1 + t2 + t3;

    // Обчислюємо час
    time = 1 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    // Виводимо результат
    printf("%.2f\n", time);

    return 0;
}

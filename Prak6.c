#include <stdio.h>
#include <math.h>

// Функція для обчислення довжини вектора за його координатами
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    // Обчислення різниці між координатами по осі X та Y
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;

    // Обчислення довжини вектора за формулою відстані між двома точками у просторі
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main() {
    int x1, y1, x2, y2;

    // Зчитування вхідних значень координат від користувача
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Обчислення довжини вектора за допомогою функції calculateVectorLength
    double result = calculateVectorLength(x1, y1, x2, y2);

    // Виведення результату з точністю до шести знаків після коми
    printf("%.6lf\n", result);

    return 0;
}

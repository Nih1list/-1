#include <stdio.h>

// Функція для знаходження НСД двох чисел
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Функція для знаходження НСК двох чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    scanf("%d", &n);  // Зчитуємо кількість чисел

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);  // Зчитуємо числа у масив
    }

    int result = numbers[0];  // Ініціалізуємо результат першим числом

    // Знаходимо НСК для всіх чисел
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);  // Оновлюємо результат знаходженням НСК
    }

    printf("%d\n", result);  // Виводимо результат

    return 0;
}

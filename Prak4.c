#include <stdio.h>

// Функція для підрахунку кількості рівних дільників числа n
int countDivisors(int n) {
    int count = 0;

    // Перебираємо всі числа від 1 до n
    for (int i = 1; i <= n; i++) {
        // Перевіряємо, чи частка (n % i) дорівнює частці за цілим діленням (n / i)
        if (n % i == n / i) {
            // Якщо значення співпадають, збільшуємо лічильник count
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    // Виклик функції countDivisors для підрахунку рівних дільників числа n
    int result = countDivisors(n);

    // Вивід результату
    printf("%d\n", result);

    return 0;
}

#include <stdio.h>

long long countNumbers(int digits) {
    // Ініціалізуємо початкові значення для розрядів 1, 2, та 3
    long long dp[digits + 1];
    dp[1] = 2; // 5 та 9
    dp[2] = 4; // 55, 59, 95, 99

    for (int i = 3; i <= digits; i++) {
        // Для кожного нового розряду, кількість чисел дорівнює сумі трьох попередніх розрядів
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[digits];
}

int main() {
    int digits;
    scanf("%d", &digits);

    long long result = countNumbers(digits);
    printf("%lld\n", result);

    return 0;
}

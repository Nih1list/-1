#include <stdio.h>

int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 1; // Порожня послідовність
    dp[1] = 2; // Послідовність з одним елементом може бути 0 або 1

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345; // Сума кількостей послідовностей без останнього елемента та без двох останніх елементів
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}

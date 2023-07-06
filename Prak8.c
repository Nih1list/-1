#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 14

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0}; // Масив для зберігання частоти кожної літери

    // Розрахунок частоти кожної літери у слові
    for (int i = 0; i < length; i++) {
        char c = toupper(word[i]);
        int index = c - 'A';
        frequency[index]++;
    }

    long long totalAnagrams = factorial(length);

    // Розрахунок кількості анаграм з урахуванням повторень літер
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            totalAnagrams /= factorial(frequency[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[MAX_LENGTH + 1];
    printf("Введіть слово: ");
    scanf("%s", word);

    long long result = countAnagrams(word);
    printf("Кількість можливих анаграм: %lld\n", result);

    return 0;
}


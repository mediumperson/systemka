#include <stdio.h>

void task6() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Число четное.\n");
    } else {
        printf("Число нечетное.\n");
    }
}

void task7() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Число положительное.\n");
    } else if (num < 0) {
        printf("Число отрицательное.\n");
    } else {
        printf("Число равно нулю.\n");
    }
}

void task8() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        printf("Число кратно 3.\n");
    } else {
        printf("Число не кратно 3.\n");
    }
}

void task9() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("Большее число: %d\n", num1);
    } else {
        printf("Большее число: %d\n", num2);
    }
}

void task10() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
        printf("Числа равны.\n");
    } else {
        printf("Числа не равны.\n");
    }
}

int main() {
    printf("Задачи на условные операторы:\n");
    task6();
    task7();
    task8();
    task9();
    task10();
    return 0;
}

#include <stdio.h>

void task11() {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void task12() {
    int i = 1;
    while (i <= 10) {
        printf("5 * %d = %d\n", i, 5 * i);
        i++;
    }
}

void task13() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Сумма чисел от 1 до 100: %d\n", sum);
}

void task14() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void task15() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    printf("Делители числа %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printf("Задачи на циклы:\n");
    task11();
    task12();
    task13();
    task14();
    task15();
    return 0;
}

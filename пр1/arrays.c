#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void task16() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void task17() {
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void task18() {
    int arr[10];
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Массив: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void task19() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("Сумма элементов массива: %d\n", sum);
}

void task20() {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int sumArr[10];
    printf("Сумма массивов: ");
    for (int i = 0; i < 10; i++) {
        sumArr[i] = arr1[i] + arr2[i];
        printf("%d ", sumArr[i]);
    }
    printf("\n");
}

int main() {
    printf("Задачи на массивы:\n");
    task16();
    task17();
    task18();
    task19();
    task20();
    return 0;
}
    

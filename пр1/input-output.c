#include <stdio.h>

void task1() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    printf("Вы ввели: %d\n", num);
}

void task2() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    printf("Сумма: %d\n", num1 + num2);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);
    printf("Частное: %.2f\n", (float)num1 / num2);
}

void task3() {
    int num1, num2, num3;
    printf("Введите три числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Среднее арифметическое: %.2f\n", (float)(num1 + num2 + num3) / 3);
}

void task4() {
    char name[50];
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Привет, %s!\n", name);
}

void task5() {
    int year, age;
    printf("Введите год вашего рождения: ");
    scanf("%d", &year);
    age = 2024 - year;
    printf("Ваш возраст: %d\n", age);
}

int main() {
    printf("Задачи на ввод и вывод данных:\n");
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
}

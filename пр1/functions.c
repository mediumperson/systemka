#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void task21() {
    int num;
    printf("Введите число для вычисления факториала: ");
    scanf("%d", &num);
    printf("Факториал числа %d: %d\n", num, factorial(num));
}
 
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void task22() {
    int num;
    printf("Введите число для проверки на простоту: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("Число %d является простым.\n", num);
    } else {
        printf("Число %d не является простым.\n", num);
    }
}

void printDivisors(int n) {
    printf("Делители числа %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void task23() {
    int num;
    printf("Введите число для вывода делителей: ");
    scanf("%d", &num);
    printDivisors(num);
}

void printNumbersBetween(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i < b; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void task24() {
    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);
    printf("Числа между %d и %d: ", num1, num2);
    printNumbersBetween(num1, num2);
}

int sumDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int areAmicable(int a, int b) {
    return (sumDivisors(a) == b && sumDivisors(b) == a);
}

void task25() {
    int num1, num2;
    printf("Введите два числа для проверки на дружественность: ");
    scanf("%d %d", &num1, &num2);
    if (areAmicable(num1, num2)) {
        printf("Числа %d и %d являются дружественными.\n", num1, num2);
    } else {
        printf("Числа %d и %d не являются дружественными.\n", num1, num2);
    }
}

int main() {
    printf("Задачи на функции:\n");
    task21();
    task22();
    task23();
    task24();
    task25();
    return 0;
}

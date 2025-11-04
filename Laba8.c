#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int n;
    double product = 1.0;
    printf("Введите n: ");
    scanf("%d", &n);
    for (int k = 2; k <= n; k++) 
    {
        product = product * (1.0 - 1.0 / (k * k));
    }
    printf("Результат: %.10f\n", product);
    return 0;
}

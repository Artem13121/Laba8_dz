# Домашнее задание к работе № 8
### Условие : 
<img width="670" height="132" alt="image" src="https://github.com/user-attachments/assets/ab377938-0e2f-4e4d-a87f-d9299d897d94" />


### Блок-схема:
<img width="1872" height="2704" alt="image" src="https://github.com/user-attachments/assets/d31e4d5f-0d35-405f-a4b2-e748daeb75ec" />


### Программа
```
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
        product *= (1.0 - 1.0 / (k * k));
    }
    printf("Результат: %.10f\n", product);
    return 0;
}
```
### Контрольный пример
Пусть n = 4, тогда:

(1-1/4)*(1-1/9)*(1-1/16)

Результат 0.625
### Результат работы программы
Введём n = 6. Результат будет равен 0,5833333333.
### Информация о разработчике
Лантрат Артём, бИЦ-251

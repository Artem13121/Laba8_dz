# Домашнее задание к работе № 8
### Условие : 
<img width="670" height="132" alt="image" src="https://github.com/user-attachments/assets/ab377938-0e2f-4e4d-a87f-d9299d897d94" />


### Блок-схема:
<img width="2084" height="2084" alt="image" src="https://github.com/user-attachments/assets/bbaa8ff7-128e-44a9-bcde-20e794355633" />


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
### Результат работы программы
Введём n = 3. Результат будет равен 0,6666666667.
### Информация о разработчике
Лантрат Артём, бИЦ-251

# Рекурсия и вещественный тип данных

## Рекурсия

**Рекурсия** — это использование определения какого-то понятие через само это понятие.

### Рекурсия в функциях

```
#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
```

**Рекурсивная функция** — вызов функции из нее же самой.

Она должна состоять из:
1. Условие остановки
2. Шаг рекурсии

```
#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n <=1) // Условие остановки
        return 1;
    return n * factorial(n-1); // Шаг рекурсии
}

int main()
{
    printf("%d", factorial(6));
    return 0;
}
```

### Стек вызовов

При каждом новом вызове функции ее параметры и ее локальные переменные попадают в стек, при переполнении которого, наступит ошибка stack overflow.

#### Префиксная рекурсия
```
#include <stdio.h>

void Rec(int n)
{
    if (n > 0)
        Rec(n - 1);
    printf("%5d", n);
}
int main(void)
{
    Rec(4);
    return 0;
}
```

#### Постфиксная рекурсия
```
#include <stdio.h>

void Rec(int n)
{
    printf("%5d", n);
    if (n > 0)
        Rec(n - 1);
    
}
int main(void)
{
    Rec(4);
    return 0;
}
```

### Сложная рекурсия
**Сложная рекурсия** — это тип рекурсии, при котором функция A вызывает функцию B, а та в свою очередь вызывает A.

**Пример:** вычислить значение выражения $\frac{x^n}{n!}$

```
#include <stdio.h>

int my_pow(int, int); // описание прототипа my_pow
double calc(int x, int n)
{
    return (double)my_pow(x, n) / n;
    // вызов функции pow
}
int my_pow(int x, int n)
{
    if (n == 1)
        return x;
    return x * calc(x, n - 1); // вызов функции calc
}
int main()
{
    int n=2, x=3;

    double a = calc(x, n); // вызов рекурсивной функции
    printf("%lf", a);
    return 0;
}
```

n=2
x=3
4.500000

## Рекурсия и итерирование

**Итерация** — организация обработки данных, при которой действия повторяются многократно, не приводя при этом к вызовам самих себя (в отличие от рекурсии).

### Сумма цифр с помощью итеррирования

```
#include <stdio.h>

int sumIter(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    printf("%d\n", sumIter(1234));
    return 0;
}
```

В цикле лучше решать задачи, где результат следующего полностью зависит от результата предыдущего (факториал).

**Плюсы итерации:**
- экономия памяти
- быстродействие

### Сумма цифр с помощью рекурсии
```
#include <stdio.h>

int sumRec(int num)
{
    if (num <= 0)
        return 0;
    return num % 10 + sumRec(num / 10);
}

int main()
{
    printf("%d\n", sumRec(12345));
    return 0;
}
```

Рекурсия эффективна с вложенными каталогами, деревьями, кэшируемыми функциями

**Плюсы рекурсии:**
- наглядность
- компактность

### Проблемы рекурсии

```
int fib(int num)
{   
    if(num <= 0)
        return 0;
    if(num == 1)
        return 1; 
    return fib(num-2) + fib(num-1); 
   
}

int main()
{
    printf("%d", fib(8));
    return 0;
}
```

В результате будут следующие количество повторов вычисления F(x):

<table>
<tr><th>F(X)</th><th>F(1)</th><th>F(2)</th><th>F(3)</th><th>F(4)</th><th>F(5)</th><th>F(6)</th></tr>
<tr><td>Повторы</td><td>8</td><td>5</td><td>3</td><td>2</td><td>1</td><td>1</td></tr>
</table>

Чтобы избежать повторных вычислений, можно:
- Кешировать результат, например в глобальном массиве.
- Сделать итерационную версию

**Итерационная версия:**
```
int fib(int num)
{
    int first = 0;
    int second = 1;
    int sum = 0;
    if(num <= 2)
        sum = second;
    for(int i = 1; i < num; i++)
    {
        sum = first + second;
        first = second;
        second = sum; 
    }
    return sum; 
}

int main()
{
    printf("%d", fib(10));
    return 0;
}
```

### Хвостовая рекурсия

Если структура рекурсивного алгоритма такова, что рекурсивный вызов является последней выполняемой операцией в функции, а его результат непосредственно возвращается в качестве результата функции, то такую рекурсию называют хвостовой. 
Компиляторы поддерживающие оптимизацию кода могут заменить ее на цикл.

```
#include<stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n <= 1) // условие выходы
        return 1;
    return n * factorial(n - 1); // Шаг
}

int main()
{
    printf("%d\n", factorial(5));
    return 0;
}
```

### Замена цикла на рекурсию

**Цикл:**

```
#include<stdio.h>

int cycle(n)
{
    for (int i = 1; i < n; i++)
        printf("%d ", i);
}

int main()
{
    cycle(5);
    return 0;
}
```

Можно заменить любой цикл рекурсией

```
#include <stdio.h>

void cycle(int i, int n)
{
    if (i == n)
        return;
    printf("%d ", i);
    cycle(i + 1, n);
}

int main()
{
    cycle(1, 5);
    return 0;
}
```


# Домашнее задание к работе 3

## Условие задачи

Написать и отладить программу пересчета пропускной способности из бит/с в Кбайт/с и обратно.

## 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. Задать значение пропускной способности в бит/с:
   - `bits_per_sec = 8192`
3. Задать значение пропускной способности в Кбайт/с:
   - `kbytes_per_sec = 2`
4. Перевести бит/с в Кбайт/с:
   - `result_kbytes = bits_per_sec / 8 / 1024`
5. Перевести Кбайт/с в бит/с:
   - `result_bits = kbytes_per_sec * 1024 * 8`
6. Вывести результаты вычислений:
   - `result_kbytes`
   - `result_bits`
7. **Конец**

### Блок-схема

![Блок-схема](block_scheme.png)

[Ссылка на блок-схему, созданную в draw.io](ВСТАВИТЬ_ССЫЛКУ_НА_DRAW.IO)

## 2. Реализация программы

```c
#include <stdio.h>

int main()
{
    const int BITS_IN_BYTE = 8;
    const int BYTES_IN_KBYTE = 1024;

    double bits_per_sec = 8192;
    double kbytes_per_sec = 2;

    double result_kbytes = bits_per_sec / BITS_IN_BYTE / BYTES_IN_KBYTE;
    double result_bits = kbytes_per_sec * BYTES_IN_KBYTE * BITS_IN_BYTE;

    printf("%.0f бит/с = %.2f Кбайт/с\n", bits_per_sec, result_kbytes);
    printf("%.2f Кбайт/с = %.0f бит/с\n", kbytes_per_sec, result_bits);

    return 0;
}
```

## 3. Результаты работы программы

```text
8192 бит/с = 1.00 Кбайт/с
2.00 Кбайт/с = 16384 бит/с
```

## 4. Информация о разработчике

Петров Егор Андреевич, БИЦТ-262

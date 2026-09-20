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
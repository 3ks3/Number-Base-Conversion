#include "convert.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void div_convert(uint32_t n, int base, char *out)
{
    char temp[65];
    int pos = 0;

    if (n == 0)
    {
        strcpy(out, "0");
        return;
    }

    while (n > 0)
    {
        int remainder = n % base;

        n = n / base;

        if (remainder < 10)
            temp[pos++] = '0' + remainder;
        else
            temp[pos++] = 'A' + (remainder - 10);
    }

    for (int i = 0; i < pos; ++i)
    {
        out[i] = temp[pos - i - 1];
    }
    out[pos] = '\0';
}

void sub_convert(uint32_t n, int base, char *out)
{
    char result[65];
    int pos = 0;

    if (n == 0)
    {
        strcpy(out, "0");
        return;
    }

    uint32_t power = 1;

    while (power <= n / base)
        power *= base;

    while (power > 0)
    {
        int digit = n / power;

        n = n % power;

        power /= base;

        if (digit < 10)
            result[pos++] = '0' + digit;
        else
            result[pos++] = 'A' + (digit - 10);
    }

    result[pos] = '\0';
    strcpy(out, result);
}

void oct_to_bin(const char *oct, char *out)
{
    int pos = 0;

    for (int i = 0; oct[i] != '\0'; i ++)
    {
        int digit = oct[i] - '0';

        out[pos++] = (digit & 4) ? '1' : '0';
        out[pos++] = (digit & 2) ? '1' : '0';
        out[pos++] = (digit & 1) ? '1' : '0';
    }
    out[pos] = '\0';
}

void oct_to_hex(const char *oct, char *out)
{
    char bin[100] = {0};
    oct_to_bin(oct, bin);

    int len = strlen(bin);

    int padded_len = len;

    if (len % 4 != 0)
    {
        padded_len = len + (4 - (len % 4));
    }

    char padded_bin[100] = {0};

    int pad_zeros = padded_len - len;

    for (int i = 0; i < pad_zeros; i++)
    {
        padded_bin[i] = '0';
    }

    strcpy(padded_bin + pad_zeros, bin);

    int out_pos = 0;

    for (int i = 0; i < padded_len; i += 4)
    {
        int val = 0;

        for (int j = 0; j < 4; j++)
        {
            val = (val << 1) | (padded_bin[i + j] - '0');
        }
        out[out_pos++] = "0123456789ABCDEF"[val];
    }
    out[out_pos] = '\0';
}

void hex_to_bin(const char *hex, char *out)
{
    int pos = 0;

    for (int i = 0; hex[i] != '\0'; i++)
    {
        char c = hex[i];
        int val;

        if (isdigit(c)) val = c - '0';
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f') val = c - 'a' + 10;
        else continue;

        out[pos++] = (val & 8) ? '1' : '0';
        out[pos++] = (val & 4) ? '1' : '0';
        out[pos++] = (val & 2) ? '1' : '0';
        out[pos++] = (val & 1) ? '1' : '0';
    }
    out[pos] = '\0';
}

void to_sign_magnitude(int32_t n, char *out)
{
    uint32_t val = (n >= 0) ? n : -n;

    for (int i = 0; i < 32; i++)
    {
        out[i] = (val & (1U << (31 - i))) ? '1' : '0';
    }
    if (n < 0)
    {
        out[0] = '1';
    }
    out[32] = '\0';
}

void to_ones_complement(int32_t n, char *out)
{
    uint32_t val;

    if (n >= 0)
    {
        val = n;
    }
    else
    {
        val = ~((uint32_t)(-n));
    }
    for (int i = 0; i < 32; i++)
    {
        out[i] = (val & (1U << (31 - i))) ? '1' : '0';
    }
    out[32] = '\0';
}

void to_twos_complement(int32_t n, char *out)
{
    uint32_t val = (uint32_t)n;

    for (int i = 0; i < 32; i++)
    {
        out[i] = (val & (1U << (31 - i))) ? '1' : '0';
    }
    out[32] = '\0';
}

void print_tables(uint32_t n)
{
    char bin[65], oct[65], hex[65];

    div_convert(n, 2, bin);
    div_convert(n, 8, oct);
    div_convert(n, 16, hex);

    printf("Original: Binary=%s Octal=%s Decimal=%u Hex=%s\n", bin, oct, n, hex);

    uint32_t shifted = n << 3;

    div_convert(shifted, 2, bin);
    div_convert(shifted, 8, oct);
    div_convert(shifted, 16, hex);

    printf("Left Shift by 3: Binary=%s Octal=%s Decimal=%u Hex=%s\n", bin, oct, shifted, hex);

    uint32_t masked = n & 0xFF;

    div_convert(masked, 2, bin);
    div_convert(masked, 8, oct);
    div_convert(masked, 16, hex);

    printf("AND with 0xFF: Binary=%s Octal=%s Decimal=%u Hex=%s\n", bin, oct, masked, hex);
}




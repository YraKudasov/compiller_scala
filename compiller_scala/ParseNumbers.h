#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

void remove_underscores_in_integer(char* str_integer) {
    int i, j;
    i = j = 0;

    while (str_integer[i]) {
        if (str_integer[i] == '_') {
            i++;
            continue;
        }

        str_integer[j++] = str_integer[i++];
    }

    str_integer[j] = '\0';
}

void parse_integer(int64_t* integer, char* str_integer, int base) {
    int offset = 0;
    switch (base) {
    case 2:
    case 16:
        offset = 2; // Для бинарного и шестнадцатеричного представления
        break;
    case 10:
        offset = 0; // Для десятичного представления
        break;
    }

    remove_underscores_in_integer(str_integer);
    *integer = strtol(str_integer + offset, NULL, base);
}

void parse_real(double* real, char* str_real) {
    *real = strtod(str_real, NULL);
}
#include <stdio.h>

int main(void) {
    /* 10 — десятичное, 010 — восьмеричное, 0x10 — шестнадцатеричное.
   Суффиксы u, L, LL, ULL, f задают тип литерала.
   0.1f — float, 0.1 — double. Они не равны из-за разного округления.
   'A' — это код символа, записанный числом. Числа в Си
   занимают 4 байта. Переменная char занимает 1 байт.*/
    int a = 10, b = 010, c = 0x10;
    printf("DEC_10: %d\n", a);
    printf("OCT_10: %d\n", b);
    printf("HEX_10: %d\n", c);
    printf("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);
    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));
    return 0;
}
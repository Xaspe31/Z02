#include <stdio.h>
#include <stdint.h>

int main(void) {
    /* uint8_t хранит значения от 0 до 255. При переполнении
       результат "сворачивается" по модулю 256. */
    int x;
    scanf("%d", &x);
    uint8_t v = x;
    uint8_t add = v + v;
    uint8_t mul2 = add;
    uint8_t sqr = (uint8_t)(v * v);
    printf("ADD: %hhu\n", (unsigned)add);
    printf("MUL2: %hhu\n", (unsigned)mul2);
    printf("SQR: %hhu\n", (unsigned)sqr);
    return 0;
}

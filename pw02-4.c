#include <stdio.h>
#include <limits.h>

int main(void) {
    /* Со знаковым переполнением результат непредсказуем,
   а с беззнаковым — работает по кругу. Поэтому приводим к беззнаковому типу. */
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    int range_ok = ((unsigned)INT_MAX + 1u) == (unsigned)INT_MIN + 1u;
    printf("RANGE_OK: %d\n", range_ok);
    return 0;
}
}
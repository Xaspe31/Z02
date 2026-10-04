#include <stdio.h>
#include <stdbool.h>
int main(void) {
	/* bool хранит только 0 или 1. Любое ненулевое значение
	   при присваивании превращается в 1, а ноль — в 0. */
	int x, y;
	scanf("%d %d", &x, &y);
	bool a = x;
	bool b = y;
	printf("MODULE_READY: %d\n", a);
	printf("FAULT_STATE: %d\n", b);
	printf("BOOL_SIZE: %zu\n", sizeof(bool));
	printf("FLAGS_SUM: %d\n", (int)a + (int)b);
	return 0;
}
#include <stdio.h>

int main(void) {
	/* Ожидаемый результат: STOP.
   После печати START курсор стоит после T.
   \b возвращают курсор на S.
   Затем печатается P и TOP, они заменяют символы.
   Курсор снова оказывается в конце слова. */
	printf("START");
	printf("\b\b\b\bP");
	printf("TOP");
	printf("\n\a");
	return 0;
}
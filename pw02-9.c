#include <stdio.h>

int main(void) {
	/* Ожидаемый результат: STOP.
   После печати START курсор стоит после T.
   \b возвращают курсор на S.
   Затем пишутся P и TOP, заменяя прошлые символы.
   Курсор снова оказывается в конце слова. */
	printf("START");
	printf("\b\b\b\bP");
	printf("TOP");
	printf("\n\a");
	return 0;
}
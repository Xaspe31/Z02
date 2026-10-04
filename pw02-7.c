#include <stdio.h>

int main(void) {
    /* float хранит меньше значащих цифр (7), чем double(15) и long double(18).
   Поэтому при прибавлении 1 к большому числу float не может
   отразить изменение, а double и long double могут.*/
    long double ld;
    scanf("%Lf", &ld);
    double d = ld;
    float f = ld;
    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);
    printf("FLOAT+1: %.6f\n", f + 1);
    printf("DOUBLE+1: %.6f\n", d + 1);
    printf("LDOUBLE+1: %.6Lf\n", ld + 1);
    return 0;
}
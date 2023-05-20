#include <stdio.h>
#include <math.h>

int main() {
    double результат;
    double член1, член2;

    член1 = (sqrt(2) + 2 + pow(2, 2)) / (sqrt(3) + 3 + pow(3, 2));
    член2 = (sqrt(4) + 4 + pow(4, 2)) / (sqrt(8) + 8 + pow(8, 2));
    результат = член1 + член2;

    printf("Значення виразу: %f\n", результат);

    return 0;
}

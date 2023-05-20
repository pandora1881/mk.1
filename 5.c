#include <stdio.h>

int main() {
    int age;

    printf("Введіть ваш вік: ");
    scanf("%d", &age);

    if (age >= 1 && age <= 10) {
        printf("Ви дитина\n");
    } else if (age >= 11 && age <= 15) {
        printf("Ви підліток\n");
    } else if (age >= 16 && age <= 20) {
        printf("Ви юнак\n");
    } else if (age >= 21 && age <= 30) {
        printf("Ви молода людина\n");
    } else {
        printf("Ви доросла людина\n");
    }

    return 0;
}

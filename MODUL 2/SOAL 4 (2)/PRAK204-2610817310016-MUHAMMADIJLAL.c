#include <stdio.h>

int main() {
    float r, h;

    scanf("%f %f", &r, &h);

    float pi = 22.0 / 7.0;

    float volume = pi * r * r * h;
    float luas = 2 * pi * r * (r + h);
    float keliling = 2 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}
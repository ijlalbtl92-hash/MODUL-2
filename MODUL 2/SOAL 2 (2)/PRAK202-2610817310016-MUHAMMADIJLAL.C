#include <stdio.h>

int main() {
    float val1, val2;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &val1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &val2);

    float hasil = val1 + val2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", val1, val2, hasil);

    return 0;
}
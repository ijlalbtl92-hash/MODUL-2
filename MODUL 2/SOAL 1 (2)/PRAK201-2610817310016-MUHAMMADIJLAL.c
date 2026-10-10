#include <stdio.h>

int main() {
    char nama[100], nim[50], kelas[50], ttl[100], alamat[100], hobi[100], hp[50];

    printf("Nama                 : ");
    scanf(" %[^\n]", nama);
    printf("NIM                  : ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel       : ");
    scanf(" %[^\n]", kelas);
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", ttl);
    printf("Alamat              : ");
    scanf(" %[^\n]", alamat);
    printf("Hobby               : ");
    scanf(" %[^\n]", hobi);
    printf("No. HP              : ");
    scanf(" %[^\n]", hp);

    printf("\nNama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobi);
    printf("No. HP               : %s\n", hp);

    return 0;
}
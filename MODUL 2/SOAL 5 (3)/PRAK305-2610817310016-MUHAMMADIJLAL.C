#include <stdio.h>

int main() {
    long long total_detik;

    scanf("%lld", &total_detik);

    long long hari = total_detik / 86400;
    long long sisa = total_detik % 86400;
    long long jam = sisa / 3600;
    sisa %= 3600;
    long long menit = sisa / 60;
    long long detik = sisa % 60;

    if (hari > 0) {
        printf("%lld hari %02lld:%02lld:%02lld\n", hari, jam, menit, detik);
    } else {
        printf("%02lld:%02lld:%02lld\n", jam, menit, detik);
    }

    return 0;
}
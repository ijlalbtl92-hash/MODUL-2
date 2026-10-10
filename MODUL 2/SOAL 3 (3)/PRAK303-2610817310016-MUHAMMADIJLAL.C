#include <stdio.h>

int main() {
    long long n;

    scanf("%lld", &n);

    if (n > 0) {
        printf("positif\n");
    } else if (n < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }

    return 0;
}
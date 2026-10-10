#include <stdio.h>

int main() {
    int a, b, c;
    int count = scanf("%d %d", &a, &b);
    if (count == 2) {
        // Check if there is a 3rd number
        if (scanf("%d", &c) == 1) {
            int temp;
            if (a > b) { temp = a; a = b; b = temp; }
            if (a > c) { temp = a; a = c; c = temp; }
            if (b > c) { temp = b; b = c; c = temp; }
            printf("%d %d %d\n", a, b, c);
        } else {
            if (a > b) {
                int temp = a; a = b; b = temp;
            }
            printf("%d %d\n", a, b);
        }
    }
    return 0;
}

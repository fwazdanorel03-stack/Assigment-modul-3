#include <stdio.h>

// Fungsi rekursif faktorial
long long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;
    printf("Input: ");
    scanf("%d", &angka);

    printf("%d! = %lld\n", angka, faktorial(angka));

    return 0;
}


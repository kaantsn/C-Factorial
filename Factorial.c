#include <stdio.h>

int main() {
    int sayi, i;
    unsigned long long faktoriyel = 1;

    printf("Lutfen bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi < 0) {
        printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
    } else {
        for (i = 1; i <= sayi; ++i) {
            faktoriyel *= i;
        }
        printf("%d sayisinin faktoriyeli: %llu\n", sayi, faktoriyel);
    }

    return 0;
}

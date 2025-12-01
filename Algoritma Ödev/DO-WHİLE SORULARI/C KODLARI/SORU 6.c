#include <stdio.h>

int main() {
    int sayi,i=1,toplam=0;

    printf("Bir sayı girin:");
    scanf("%d", &sayi);

    do {
        toplam+=i;
        i++;
    } while (i<=sayi);

    printf("sayıların toplamı=%d\n",toplam);

    return 0;
}
#include <stdio.h>

int main(){

    int sayi,altSinir,ustSinir;
    
    printf("Alt siniri girin:");
    scanf("%d", &altSinir);

    printf("Üst siniri girin:");
    scanf("%d", &ustSinir);

    do {
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);

    } while (sayi<altSinir || sayi>ustSinir);

    printf("Geçerli bir sayi girdiniz,program sonlanirildi\n");

    return 0;
}

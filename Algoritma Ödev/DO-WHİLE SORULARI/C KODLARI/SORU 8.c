#include <stdio.h>

int main(){
    
    int sayi,toplam=0;
    
    do {
        printf("Bir sayi girin:");
        scanf("%d", &sayi);

        toplam+=sayi;

    } while (toplam<=100);

    printf("Toplam %d oldu ve 100'ü geçti,Program sonlandirildi.\n",toplam);

    return 0;
}

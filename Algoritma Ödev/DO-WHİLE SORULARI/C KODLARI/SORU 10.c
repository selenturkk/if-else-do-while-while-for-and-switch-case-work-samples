#include <stdio.h>

int main(){
    
    int sayi;

    do {
        printf("Bir sayi girin:");
        scanf("%d", &sayi);

    } while (sayi!=0);

    printf("Program sonlandirildi\n");

    return 0;
}

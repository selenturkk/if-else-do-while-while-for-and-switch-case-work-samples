#include <stdio.h>

int main(){
    
    int sifre,dogruSifre=1234;         

    do {
        printf("Sifreyi giriniz:");
        scanf("%d", &sifre);
    }
    while (sifre!=dogruSifre);   

    printf("Sifre dogru,giriş yaptiniz\n");

    return 0;
}

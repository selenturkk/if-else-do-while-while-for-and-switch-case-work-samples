#include <stdio.h>

int main(){
    
    int sayi;

    do {
        printf("Bir sayi giriniz:");
        scanf("%d", &sayi);
    }
    while (sayi%2==0);  

    printf("Tek sayi girdiniz ve program sonlandi\n");

    return 0;
}

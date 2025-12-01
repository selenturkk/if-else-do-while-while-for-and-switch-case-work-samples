#include <stdio.h>

int main(){
    
    int sayi,toplam=0; 
    
    printf("Bir sayi girin:");
    scanf("%d", &sayi);
    
    for (int i=1;i<=sayi;i++) {
        toplam+=i; 
    }

    printf("sayilarin toplami:%d\n",toplam);

    return 0;
}
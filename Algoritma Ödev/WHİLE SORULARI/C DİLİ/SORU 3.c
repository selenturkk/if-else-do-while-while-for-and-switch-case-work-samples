#include <stdio.h>

int main() {
    
    int terssayi=0,kalan,sayi; 

    printf("pozitif sayi girin:");
    scanf("%d",&sayi); 

    while (sayi!=0) {
        
        kalan =sayi % 10; 
        terssayi = terssayi*10 +kalan; 
        sayi =sayi/10; 
    }

    printf("ters cevrilmis sayi: %d\n",terssayi);

    return 0;
}
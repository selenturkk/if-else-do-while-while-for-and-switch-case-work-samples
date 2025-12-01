#include <stdio.h>

int main(){
    
    int sayi=0;
    
    
    while(sayi < 10 || sayi > 50){
        
        printf("10 ile 50 arasi bir sayi giriniz: ");
        scanf("%d",&sayi);   
        
        if (sayi < 10 || sayi > 50) {
            printf("Girdiginiz sayi gecersiz,araliga dikkat edin.\n");
        }
        
    }
        printf("Gecerli Girdi Alindi\n");
        printf("Girilen gecerli sayi: %d", sayi);
    
    
    
    
    
    
    
    return 0;
}
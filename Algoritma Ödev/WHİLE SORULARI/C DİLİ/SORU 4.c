#include <stdio.h>

int main() {
    int sayi; 
    int fakt=1; 
   
    printf("bir sayi giriniz:");
    scanf("%d",&sayi); 

    int sayac=sayi; 

    if (sayi==0) {
        printf("0!=1");
    } 
    
    else if (sayi>0) {
        
        while (sayac>=1) { 
            
            fakt=fakt*sayac; 
            
            sayac--; 
        }
        
        
        printf("%d!=%d",sayi,fakt);
    } 
    
    else {
        printf("Hata Faktoriyel sadece pozitif tam sayilar icindir.");
    }

    return 0;
}
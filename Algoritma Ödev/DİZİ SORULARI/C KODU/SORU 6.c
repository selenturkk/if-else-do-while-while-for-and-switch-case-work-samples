#include <stdio.h>

int main(){
    
    int sec,sayi1,sayi2;
    
menu:
    printf("1.toplama\n");
    printf("2.cikarma\n");
    printf("3.cikis\n");
    printf("Seciminizi yapiniz:");
    scanf("%d", &sec);

    if(sec==1){
        printf("toplama icin birinci sayi girin:");
        scanf("%d", &sayi1);
        
        printf("toplama icin ikinci sayi girin:");
        scanf("%d", &sayi2);
        
        printf("Sonuc: %d + %d = %d\n", sayi1, sayi2, sayi1 + sayi2);
        goto menu;
    }
    else if(sec==2){
        printf("Cikarma icin birinci sayi girin:");
        scanf("%d", &sayi1);
        
        printf("Cikarma icin ikinci sayi girin:");
        scanf("%d", &sayi2);
        
        printf("Sonuc: %d - %d = %d\n", sayi1, sayi2, sayi1 - sayi2);
        goto menu; 
    }
    else if(sec==3){
        
        printf("Programdan cikildi\n");
        
    }
    else{
        
        printf("gecersiz secim\n");
        goto menu;
    }

    return 0;
}
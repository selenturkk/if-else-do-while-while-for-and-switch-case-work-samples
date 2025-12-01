#include <stdio.h>

int main(){
    
    int sayi1,sayi2,kucuk,buyuk,toplam=0,i;
    
    printf("1.sayiyi girin:");
    scanf("%d", &sayi1);
    
    printf("2.sayiyi girin:");
    scanf("%d", &sayi2);

    if(sayi1<sayi2){
        kucuk=sayi1;
        buyuk=sayi2;
    }
    
    else{
        kucuk=sayi2;
        buyuk=sayi1;
    }

    for(i=kucuk;i<=buyuk;i++){
        
        toplam=toplam+i;
        
    }
    printf("Toplam sonuc:%d\n",toplam);

    return 0; 
}
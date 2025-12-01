#include <stdio.h>

int main(){
    
    float fiyat,indirimfi,indirimor=0.20;
    
    printf("urununuzun fiyatini giriniz:");
    scanf("%f",&fiyat);
    
    if(fiyat>200){
        indirimfi=fiyat-(fiyat*indirimor);
        printf("TEBRİKLER,%20 indirim kazandiniz.\n");
        printf("indirimli fiyatiniz:%.2f TL",indirimfi);
    }
    
    else{
        printf("MALESEF,indirim kazanamadiniz.\n");
        printf("İndirimsiz fiyatiniz:%.2f TL ",fiyat);
    }
    
    
    return 0;
    
    
    
    
}
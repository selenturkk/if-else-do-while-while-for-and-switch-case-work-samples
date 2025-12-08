#include <stdio.h>

int main(){
    
    int notlar[3],ort;

    printf("1.sinav notunu giriniz:");
    scanf("%d", &notlar[0]); 

    printf("2.sinav notunu giriniz:");
    scanf("%d", &notlar[1]);

    printf("3.sinav notunu giriniz:");
    scanf("%d", &notlar[2]);

    

    printf("\n1.Sinav %d :", notlar[0]);
    if (notlar[0]>=50) {
        printf("BASARİLİ\n");
    } else {
        printf("BASARİSİZ\n");
    }


    printf("2.Sinav %d :", notlar[1]);
    if (notlar[1]>=50) {
        printf("BASARİLİ\n");
    } else {
        printf("BASARİSİZ\n");
    }

   
    printf("3.Sinav %d :", notlar[2]);
    if (notlar[2]>=50) {
        printf("BASARİLİ\n");
    } else {
        printf("BASARİSİZ\n");
    }
    
    ort=(notlar[0]+notlar[1]+notlar[2])/3;
    printf("ortalamanız %d :", ort);
    if(ort>=50){
        printf("GECTİNİZ\n");
    }
    else{
        printf("KALDİNİZ\n");
    }

    return 0;
}
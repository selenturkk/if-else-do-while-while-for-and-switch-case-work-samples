#include <stdio.h>

int main(){
    
    int sayilar[]={10, 20, 30, 40, 50},i,deger,yeni;

    for(i=0;i<5;i++){
        printf("[%d].Eleman:%d\n",i,sayilar[i]);
    }

    printf("\nDegistirmek istediginiz deger numarasini girin:");
    scanf("%d", &deger);

    if(deger>=0 && deger<5){
        
        printf("Yeni degeri girin:");
        scanf("%d", &yeni);

        sayilar[deger]=yeni;

        printf("\ndegisim yapildi\n");

    } else {
        printf("\nGecersiz deger numarasi girdiniz\n");
    }

    printf("\nyeni dizi:\n");
    
    for(i=0;i<5;i++){
        if(i==deger && deger>=0 && deger<5){
            printf("[%d].eleman:%d degisti\n", i,sayilar[i]);
        } else {
            printf("[%d].Eleman:%d\n",i,sayilar[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main(){
    
    int notlar[5],i,toplam=0,ogrenci=0;
    
    for(i=0;i<5;i++){
        printf("%d.ogrencinin notu:", i + 1);
        scanf("%d", &notlar[i]);
    }

    for(i=0;i<5;i++){
        
        if(notlar[i]==0){
            continue; 
        }

        toplam+=notlar[i];
        ogrenci++;
    }

    printf("\nsinava giren ogrenci sayisi:%d\n", ogrenci);
    printf("girenlerin notlari toplami:%d\n", toplam);

    return 0;
}
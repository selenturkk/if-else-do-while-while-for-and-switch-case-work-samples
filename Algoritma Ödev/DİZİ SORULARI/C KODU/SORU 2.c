#include <stdio.h>

int main(){
    
    int fiyatlar[]={10,50,5},adet[3],toplam=0,i=0;
    
    while(i<3){
        printf("%d.Urunden kac adet istersiniz?:",i+1);
        scanf("%d", &adet[i]);

        toplam=toplam+(fiyatlar[i]*adet[i]);

        i++;
    }

    printf("\n1.urun fiyati:%d TL\n", fiyatlar[0]*adet[0]);
    printf("2.urun fiyati:%d TL\n", fiyatlar[1]*adet[1]);
    printf("3.urun fiyati:%d TL\n", fiyatlar[2]*adet[2]);
    printf("ODENECEK HESAP:%d TL", toplam);

    return 0;
}
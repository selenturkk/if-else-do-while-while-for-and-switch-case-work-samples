#include <stdio.h>

int main(){
    
    int fiyatlar[]={10,20,35,5}; 
    
    int secim;
    
    printf("1. Cay (%d TL)\n",fiyatlar[0]);
    printf("2. Kahve (%d TL)\n",fiyatlar[1]);
    printf("3. Meyve Suyu (%d TL)\n",fiyatlar[2]);
    printf("4. Su (%d TL)\n",fiyatlar[3]);

    printf("\nurun numarasini giriniz:");
    scanf("%d", &secim);

    switch(secim) {
        case 1:
            printf("\nSeciminiz:Cay\n");
            printf("Odenecek Tutar:%d TL\n", fiyatlar[0]);
            break; 

        case 2:
            printf("\nSeciminiz:Kahve\n");
            printf("Odenecek Tutar:%d TL\n", fiyatlar[1]);
            break;

        case 3:
            printf("\nSeciminiz:Meyve Suyu\n");
            printf("Odenecek Tutar:%d TL\n", fiyatlar[2]);
            break;

        case 4:
            printf("\nSeciminiz:Su\n");
            printf("Odenecek Tutar:%d TL\n", fiyatlar[3]);
            break;

        default:
            printf("\ngecersiz numara");
            break;
    }

    return 0;
}
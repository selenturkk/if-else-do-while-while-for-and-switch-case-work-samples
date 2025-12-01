#include <stdio.h>

int main(){

    int toplam=0,sayac=1,sayi; 

    while (sayac<=5) {
        
        printf("%d.sayiyi girin:",sayac);
        scanf("%d",&sayi); 

        if (sayi>0) {
            
            toplam=toplam+sayi; 
            
            sayac++; 
        } 
        else {
            printf("Negatif veya sifir sayi girdiniz.Lutfen pozitif bir tam sayi girin.\n");
        }
    }

    printf("Girilen sayilarin toplami:%d",toplam);

    return 0;
}
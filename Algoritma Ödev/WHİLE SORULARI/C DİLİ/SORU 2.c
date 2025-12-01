#include <stdio.h>

int main() {
    
    int sayi,onsayi; 
     

    printf("ilk sayiyi girin: ");
    scanf("%d",&onsayi); 


    while (1) {
        printf("yeni sayi girin: ");
        scanf("%d",&sayi); 

       
        if (sayi==onsayi) {
            printf("TEKRAR ettin\n",sayi);
            break; 
        }

        printf("girdi kabul edildi\n",sayi);
        
        onsayi=sayi;
    }

    printf("program sonlandirildi\n");

    return 0;
}
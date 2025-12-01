#include <stdio.h>

int main(){
    
    char islem;   
    int sayi1,sayi2,sonuc; 
         
    printf("Yapmak istediginiz islemi girin:");
    scanf("%c", &islem); 

    printf("1.sayiyi girin:");
    scanf("%d", &sayi1);
    
    printf("2.sayiyi girin:");
    scanf("%d", &sayi2);

   
    switch(islem){
        
        case '+':
            sonuc=sayi1+sayi2;
            printf("Sonuc:%d",sonuc);
            break;

        case '-':
            sonuc=sayi1-sayi2;
            printf("Sonuc:%d",sonuc);
            break;

        case '*':
            sonuc=sayi1*sayi2;
            printf("Sonuc:%d",sonuc);
            break;

        case '/':
           
            if(sayi2!=0) {
                sonuc=sayi1/sayi2;
                printf("Sonuc:%d",sonuc);
            } else{
                printf("sifira bolunemez\n");
            }
            break;

        default:
            printf("hata");
            break;
    }

    return 0;
}
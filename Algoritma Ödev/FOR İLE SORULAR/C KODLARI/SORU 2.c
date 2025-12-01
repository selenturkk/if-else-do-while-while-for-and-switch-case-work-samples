#include <stdio.h>

int main(){
    
    int toplam=0,sayi,ort; 
    
    for (int i=0;i<3;i++){
        
        printf("%d.sayiyi girin:",i+1);
        scanf("%d", &sayi);
        
        toplam+=sayi;
    }

    ort=toplam/3.0;
    
    printf("sayilarin ortalamasi:%d\n",ort);

    return 0; 
}
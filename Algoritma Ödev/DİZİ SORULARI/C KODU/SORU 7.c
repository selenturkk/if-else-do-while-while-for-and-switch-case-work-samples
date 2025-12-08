#include <stdio.h>

int main(){
    
    int sayilar[5],i,sayac=0; 

    for(i=0;i<5;i++){
        
        printf("%d.sayiyi girin:", i + 1);
        scanf("%d", &sayilar[i]);

        if(sayilar[i]<0){
            printf("\nnegatif sayi girdiniz program durdu\n");
            break;
        }
        
        sayac++;
    }

    return 0;
}
#include <stdio.h>

int main(){
    
    int sayilar[]={4, 7, 3, 2},uzunluk=4,i;
  

    printf("eski dizi:4 7 3 2\n");

    for(i=0;i<uzunluk;i++){
        
        sayilar[i]=sayilar[i] * 2; 
    }

    printf("yeni dizi:");
    
    for(i=0;i<uzunluk;i++){
        printf("%d ", sayilar[i]);
    }
    
    printf("\n"); 

    return 0;
}
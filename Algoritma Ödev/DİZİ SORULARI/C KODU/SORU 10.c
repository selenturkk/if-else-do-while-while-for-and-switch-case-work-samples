#include <stdio.h>

int main(){
    
    int sayilar[6],i; 
    
    for(i=0;i<6;i++){
        printf("%d.Sayiyi girin:", i + 1);
        scanf("%d", &sayilar[i]);
    }

    for(i=0;i<6;i++){
        
        if(sayilar[i]%2==0){
            printf("\n%d:cift\n", sayilar[i]);
        } 
        else {
            printf("\n%d:tek\n", sayilar[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int dizi[4],i,uzunluk=4; 
    
    for(i=0;i<4;i++){
        printf("%d.sayiyi girin:", i + 1);
        
        scanf("%d", &dizi[(uzunluk-1)-i]); 
    }

    printf("\ndizinin son hali:");

    for(i=0;i<4;i++){
        printf("%d",dizi[i]);
    }

    return 0;
}
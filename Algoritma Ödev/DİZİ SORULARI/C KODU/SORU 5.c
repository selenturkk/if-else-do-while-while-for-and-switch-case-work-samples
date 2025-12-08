#include <stdio.h>

int main(){
    
    int fiyatlar[]={10, 25, 50, 100, 5},i;
    
    for(i=0;i<5;i++){
        
        printf("%d.urun Eski Fiyati:%d TL --- ",i + 1, fiyatlar[i]);

        fiyatlar[i]=fiyatlar[i]+ 50; 
        
        printf("%d.urun yeni Fiyati:%d TL\n",i + 1,fiyatlar[i]);
    }
    
    return 0;
}
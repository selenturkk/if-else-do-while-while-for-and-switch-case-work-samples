#include <stdio.h>

int main(){
    
    int toplam=0,i; 

    for(i=1;i<=100;i++){
    
        if(i%2==0){
            
            toplam=toplam+i;
            
        }
        
    }
    printf("sayilarin toplami:%d",toplam);

    return 0;
}
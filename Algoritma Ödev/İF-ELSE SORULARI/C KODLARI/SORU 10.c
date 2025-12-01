#include <stdio.h>

int main(){
    
    int ay;
    
    printf("Bir ay numarasi giriniz:");
    scanf("%d",&ay);
    
    if(ay==3 || ay==4 || ay==5){
        printf("İLKBAHAR");
    }
    else if(ay==6 || ay==7 || ay==8){
        printf("YAZ");
    }
    else if(ay==9 || ay==10 || ay==11){
        printf("SONBAHAR");
    }
    else if(ay==12 || ay==1 || ay==2){
        printf("KİS");
    }
    else{
        printf("Geçersiz bir ay numarasi");
    }
    
    
    
    
    
    
    return 0;
}
#include <stdio.h>

int main(){
    
    int havasicakligi;
    
    printf("hava sicakligini giriniz:");
    scanf("%d",&havasicakligi);
    
    if(havasicakligi<=5){
        printf("hava soguk");
    }    
    else if(havasicakligi>=6 && havasicakligi<=14){
        printf("hava ilik");
    }
    else{
        printf("hava sicak");
    }
    
    
    
    return 0;
}
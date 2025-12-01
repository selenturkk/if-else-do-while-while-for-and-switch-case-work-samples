#include <stdio.h>

int main(){
    
    int sayi1,sayi2;
    
    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi1);
    
    printf("2.sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    if(sayi1>sayi2){
        printf("1.sayi 2.sayi'den buyuktur.");
    }
    else if(sayi2>sayi1){
        printf("2.sayi 1.sayi'den buyuktur.");
    }
    else{
        printf("1.sayi ve 2.sayi birbirine esittir.");
    }
    
    
    
    
    
    return 0;
}
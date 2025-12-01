#include <stdio.h>

int main(){
    
    int rakam; 
    
    printf("Bir rakam giriniz:");
    scanf("%d", &rakam);

    printf("sekil:");

    switch(rakam){
        case 1:
            printf("KARE"); 
            break; 
        case 2:
            printf("DIKDORTGEN");
            break;
        case 3:
            printf("UCGEN");
            break;
        case 4:
            printf("DAIRE");
            break;
        default:
            printf("gecersiz rakam.");
            break;
    }

    return 0;
}
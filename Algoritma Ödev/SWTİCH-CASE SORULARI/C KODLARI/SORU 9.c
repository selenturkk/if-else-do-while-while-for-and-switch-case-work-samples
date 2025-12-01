#include <stdio.h>

int main(){
    
    int puan; 
    
    printf("bir puan girin:");
    scanf("%d", &puan);

    printf("puan seviyesi:");

    switch(puan){
        case 1:
        case 2:
            printf("Dusuk");
            break; 
        case 3:
            printf("Orta");
            break;
        case 4:
        case 5:
            printf("Yuksek");
            break;
        default:
            printf("gecerli puan girin.");
            break;
    }

    return 0;
}
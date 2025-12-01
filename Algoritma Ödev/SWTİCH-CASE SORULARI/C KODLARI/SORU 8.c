#include <stdio.h>

int main(){
    
    int ay;
    
    printf("ay numarasini girin:");
    scanf("%d", &ay);

    printf("mevsim:");

    switch(ay){
        case 12:
        case 1:
        case 2:
            printf("KIS");
            break;
        case 3:
        case 4:
        case 5:
            printf("ILKBAHAR");
            break;
        case 6:
        case 7:
        case 8:
            printf("YAZ");
            break;
        case 9:
        case 10:
        case 11:
            printf("SONBAHAR");
            break;
        default:
            printf("gecersiz ay numarasi");
            break;
    }

    return 0;
}
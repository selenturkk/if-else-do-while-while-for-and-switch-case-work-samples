#include <stdio.h>

int main(){
   
    int rakam; 
    
    printf("bir rakam girin:");
    scanf("%d", &rakam);

    printf("rakamin karsiligi:");

    switch(rakam){
        case 0:
            printf("SIFIR\n");
            break;
        case 1:
            printf("BIR\n");
            break;
        case 2:
            printf("IKI\n");
            break;
        case 3:
            printf("UC\n");
            break;
        case 4:
            printf("DORT\n");
            break;
        case 5:
            printf("BES\n");
            break;
        case 6:
            printf("ALTI\n");
            break;
        case 7:
            printf("YEDI\n");
            break;
        case 8:
            printf("SEKIZ\n");
            break;
        case 9:
            printf("DOKUZ\n");
            break;
        default:
            printf("bir rakam giriniz.\n");
            break;
    }

    return 0;
}
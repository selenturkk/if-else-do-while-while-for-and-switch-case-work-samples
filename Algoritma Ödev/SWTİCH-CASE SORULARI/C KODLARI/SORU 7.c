#include <stdio.h>

int main(){
    
    char isik;
    
    printf("trafik isigi rengini girin(k,s,y):");
    scanf(" %c", &isik); 

    printf("Trafik Isigi Uyarisi:\n");

    switch(isik){
        case 'k':
            printf("kirmizi:Durun");
            break;
        case 's':
            printf("sari:Hazirlanin");
            break;
        case 'y':
            printf("yesil:Gecin");
            break;
            
        default:
            printf("gecerli trafik isigi girin.");
            break;
    }

    return 0;
}
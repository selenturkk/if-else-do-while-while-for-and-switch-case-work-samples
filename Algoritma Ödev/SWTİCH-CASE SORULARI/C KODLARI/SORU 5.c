#include <stdio.h>

int main(){
 
    char harf; 
    
    printf("bir harf notu girin:");
    scanf(" %c", &harf); 

    printf("harf notunun karsiligi:");

    switch(harf){
        case 'A':
            printf("Mukemmel");
            break;
        case 'B':
            printf("Cok iyi");
            break;
        case 'C':
            printf("Orta");
            break;
        case 'D':
            printf("Gecer");
            break;
        case 'F':
            printf("Basarisiz");
            break;
            
        default:
            printf("geçerli harf girin.");
            break;
    }

    return 0;
}
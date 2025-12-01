#include <stdio.h>

int main(){
    
    char karakter; 
    int sayi; 
    
    printf("bir karakter girin:");
    scanf("%c", &karakter);

    printf("tekrar sayisini giriniz:");
    scanf("%d", &sayi);
    
    for(int i=0;i<sayi;i++){
        printf("%c\n",karakter);
    }

    return 0; 
}
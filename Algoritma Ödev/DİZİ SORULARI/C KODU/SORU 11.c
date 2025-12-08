#include <stdio.h>

int main(){
    
    char harfler[5],i;

    harfler[0] = 'S';
    harfler[1] = 'E';
    harfler[2] = 'L';
    harfler[3] = 'E';
    harfler[4] = 'N';

    printf("dizinin icerigi:");

    for(i=0;i<5;i++){
        
        printf("%c", harfler[i]);
    }
    

    return 0;
}
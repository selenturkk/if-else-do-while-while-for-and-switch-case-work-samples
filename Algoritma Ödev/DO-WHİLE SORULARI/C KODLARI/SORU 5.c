#include <stdio.h>

int main(){
    
    int sayi=1;

    do {
        if (sayi%2==0) {  
            printf("%d\n", sayi);
        }
        sayi++;   
    }
    while (sayi<=100);

    return 0;
}

#include <stdio.h>

int main(){
    char harf;

    do {
        printf("Harf girin: ");
        scanf(" %c", &harf);  
    }
    while (harf != 's' && harf != 'S');

    printf("Program sonlandi\n");

    return 0;
}

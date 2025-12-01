#include <stdio.h>

int main() {
    
    int sicaklik;

    do {
        printf("Sicaklik değerini girin:");
        scanf("%d", &sicaklik);

    } while (sicaklik>=10);

    printf("sicaklik düştü,Program sonlandirildi\n",sicaklik);

    return 0;
}

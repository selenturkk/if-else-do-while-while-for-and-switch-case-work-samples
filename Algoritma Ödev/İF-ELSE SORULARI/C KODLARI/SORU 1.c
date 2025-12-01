#include <stdio.h>


int main(){
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("Sayiniz ÇİFTTİR");
    }

    else{
        printf("Sayiniz TEKTİR");
    }

    return 0;
}
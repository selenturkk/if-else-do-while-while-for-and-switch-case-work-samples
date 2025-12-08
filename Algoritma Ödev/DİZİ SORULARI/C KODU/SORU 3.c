#include <stdio.h>

int main(){
    
    int sayilar[3],i=0,toplam=0;     

    do{
        printf("%d.sayiyi giriniz:",i+1);
        scanf("%d", &sayilar[i]);

        toplam+=sayilar[i]; 

        i++;

    }
    while(i<3);

    printf("\nsayiların toplami:%d",toplam);

    return 0;
}
#include <stdio.h>

int main(){

    int yas;

    printf("Yasinizi giriniz:");
    scanf("%d",&yas);

    if(yas>=18){
        printf("EHLİYET ALABİLİRSİNİZ.");
    }
    else{
        printf("EHLİYET ALAMAZSINIZ.");
    }

    return 0;
}
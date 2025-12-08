#include <stdio.h>

int main(){
    
    int sayilar[]={10,25,30,42,55,68,79,99},uzunluk=8,son=sayilar[uzunluk - 1];
    
    printf("dizi boyutu:%d\n", uzunluk);
    printf("dizinin son elemani:%d\n", son);

    return 0;
}
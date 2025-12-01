#include <stdio.h>

int main(){

    int note1,note2,ort;

    printf("birinci notunuzu giriniz:");
    scanf("%d",&note1);

    printf("ikinci notunuzu giriniz:");
    scanf("%d",&note2);

    ort=(note1+note2)/2;

    if(ort>=50){
        printf("GEÇTİNİZ");
    }

    else{
        printf("KALDINIZ");
    }



    return 0;


}
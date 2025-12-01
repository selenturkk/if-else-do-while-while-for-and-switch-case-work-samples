#include <stdio.h>

int main(){
    
    int yas=0;

    while (yas<18){
        printf("yasinizi giriniz:");
        scanf("%d",&yas);

        if (yas<18){
            printf("giris yasak Lutfen tekrar deneyin\n");
        }
    }

    printf("giris basarili\n");

    return 0;
}

#include <stdio.h>

int main(){
    int sayi,fakt=1,i=1;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    do{
        fakt=fakt*i;
        i++;
    } while(i<=sayi);

    printf("%d sayisinin faktoriyeli=%d\n",sayi,fakt);

    return 0;
}

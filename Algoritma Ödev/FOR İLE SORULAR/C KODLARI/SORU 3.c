#include <stdio.h>

int main(){
    
    int sayi,fakt=1; 

    printf("Bir sayi girin:");
    scanf("%d", &sayi);
    
    for (int i=1;i<=sayi;i++) {
        fakt*=i; 
    }
    
    printf("sayinizin faktoriyeli=%d\n",fakt);

    return 0;
}
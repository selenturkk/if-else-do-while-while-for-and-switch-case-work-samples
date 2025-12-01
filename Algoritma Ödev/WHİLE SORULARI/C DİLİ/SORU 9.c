#include <stdio.h>

int main() {
    int sayac=1,sayi,sayi1,sayi2,sayi3; 
     

    while (sayac<=3){
        
        printf("%d.sayiyi girin:",sayac);
        scanf("%d",&sayi); 
        
        if (sayac==1){
            sayi1=sayi;
        } 
        
        else if (sayac==2){
            sayi2=sayi;
        } 
        
        else{ 
            sayi3=sayi;
        }

        sayac++; 
    }
   
    if (sayi1>=sayi2 && sayi1>=sayi3) {
        printf("en buyuk sayi:%d\n", sayi1);
    } 
    else if (sayi2>=sayi1 && sayi2>=sayi3) {
        printf("en buyuk sayi:%d\n", sayi2);
    } 
    else {
        printf("en buyuk sayi:%d\n", sayi3);
    }

    return 0;
}
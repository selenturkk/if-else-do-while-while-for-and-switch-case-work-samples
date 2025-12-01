#include <stdio.h>

int main() {
    
    int teksayitopla=0,sayac=1,sayi; 
   
    while(sayac<=10) {
        
        printf("%d.sayiyi girin:",sayac);
        scanf("%d",&sayi); 

        if (sayi%2!=0) { 
            
            teksayitopla=teksayitopla+sayi; 
        } 
       
        sayac++; 
    }

    printf("Girilen sayilarin toplami:%d\n",teksayitopla);

    return 0;
}
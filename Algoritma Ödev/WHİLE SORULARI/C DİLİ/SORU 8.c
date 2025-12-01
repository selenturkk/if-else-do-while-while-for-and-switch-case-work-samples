#include <stdio.h>

int main() {
    
    int ciftsayitopla=0,sayac=1,sayi; 
   
    while(sayac<=10) {
        
        printf("%d.sayiyi girin:",sayac);
        scanf("%d",&sayi); 

        if (sayi%2==0){ 
            
            ciftsayitopla=ciftsayitopla+sayi; 
        } 
       
        sayac++; 
    }

    printf("Girilen sayilarin toplami:%d\n",ciftsayitopla);

    return 0;
}
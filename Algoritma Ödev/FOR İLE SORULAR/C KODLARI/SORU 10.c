#include <stdio.h>

int main(){
    
    int sayi,i;
   
    for(i=1;i<=5;i++){
        
        printf("%d.sayiyi girin:",i);
        scanf("%d", &sayi);
        
        if(sayi%2==0){
            
            printf(" bu sayi çifttir\n", sayi);
        } 
        
        else{
            
            printf(" bu sayi tektir\n", sayi);
        }
    }

    return 0; 
}
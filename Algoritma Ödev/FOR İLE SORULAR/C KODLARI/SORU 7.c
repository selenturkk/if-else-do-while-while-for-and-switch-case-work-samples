#include <stdio.h>

int main(){
    
    int sayi,i; 
   
    printf("sayi girin:");
    scanf("%d", &sayi);

    printf("%d'in tek sayilari:\n",sayi);
    
    for(i=1;i<=sayi;i++){
        
        if(i%2!=0){
            
            printf("%d\n",i);
        }
    }

    return 0;
}
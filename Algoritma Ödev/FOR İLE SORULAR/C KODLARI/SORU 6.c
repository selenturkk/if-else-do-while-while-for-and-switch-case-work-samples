#include <stdio.h>

int main(){
    
    int sayi,i;

    printf("bir sayi girin:");
    scanf("%d", &sayi);
    
    printf("%d'nin bölenleri:\n",sayi);

    for(i=1;i<=sayi;i++){
        
        if(sayi%i==0){
            
            printf("%d\n",i);
        }
    }

    return 0;
    
    
}
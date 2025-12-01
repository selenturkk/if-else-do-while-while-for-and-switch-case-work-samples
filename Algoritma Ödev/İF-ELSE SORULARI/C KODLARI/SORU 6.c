#include <stdio.h>

int main(){
    
    int yetkiseviyesi;
    
    printf("bir yetki seviyesi giriniz:");
    scanf("%d",&yetkiseviyesi);
    
    if(yetkiseviyesi==1){
        printf(" tam yetkili yöneticisi");
    }
    else if(yetkiseviyesi==2){
        printf("sinirli yetkili kullanicisi");
    }
    else if(yetkiseviyesi==3){
        printf("misafir modu");
    }
    else{
        printf("geçersiz yetki seviyesi");
    }
    
    
    
    
    
    
    
    return 0;
}
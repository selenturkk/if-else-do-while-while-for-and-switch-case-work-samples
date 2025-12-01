#include <stdio.h>

int main(){
    
    int rakam;
    basla:
    printf("Bir rakam gir:");
    scanf("%d",&rakam);
    
    if(rakam==1){
        printf("Haftanin pazartesi günündesiniz.");
    }
    else if(rakam==2){
        printf("Haftanin sali günündesiniz.");
    }
    else if(rakam==3){
        printf("Haftanin carsamba günündesiniz.");
    }
    else if(rakam==4){
        printf("Haftanin persembe günündesiniz.");
    }
    else if(rakam==5){
        printf("Haftanin cuma günündesiniz.");
    }
    else if(rakam==6){
        printf("Haftanin cumartesi günündesiniz.");
    }
    else if(rakam==7){
        printf("Haftanin pazar günündesiniz.");
    }
    else{
        printf("Geçersiz rakam girimi tekrardan gir.\n");
        goto basla;
    }
    
    
    
    
    
    return 0;
    
}
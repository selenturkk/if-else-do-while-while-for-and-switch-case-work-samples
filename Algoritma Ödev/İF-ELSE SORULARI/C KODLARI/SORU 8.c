#include <stdio.h>

int main(){
    
    int kenar1,kenar2,kenar3;
    
    printf("1.kenari giriniz:");
    scanf("%d",&kenar1);
    
    printf("2.kenari giriniz:");
    scanf("%d",&kenar2);
    
    printf("3.kenari giriniz:");
    scanf("%d",&kenar3);
    
    if(kenar1==kenar2 && kenar2==kenar3){
        printf("Bu ucgen EŞKENAR'DİR");
    }
    else if(kenar1==kenar2 || kenar1==kenar3 || kenar2==kenar3){
        printf("Bu ucgen İKİKENAR'DİR");
    }
    else{
        printf("Bu ucgen CESİTKENAR'DİR");
    }
    
    
    
    
    
    
    
    
    return 0;
}
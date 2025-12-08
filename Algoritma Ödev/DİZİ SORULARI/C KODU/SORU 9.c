#include <stdio.h>

int main(){
    
    int sicaklik[3],i,dusuk,yuksek; 
  
    for(i=0;i<3;i++){
        printf("%d.Gunun sicakligini giriniz:",i+1);
        scanf("%d", &sicaklik[i]);
    }

    yuksek=sicaklik[0];
    dusuk=sicaklik[0];

    for(i=1;i<3;i++){
        
        if(sicaklik[i]>yuksek){
            yuksek=sicaklik[i];
        }

        if(sicaklik[i]<dusuk){
            dusuk=sicaklik[i]; 
        }
    }

    printf("En Yuksek Sicaklik:%d derece\n",yuksek);
    printf("En Dusuk Sicaklik :%d derece\n",dusuk);

    return 0;
}
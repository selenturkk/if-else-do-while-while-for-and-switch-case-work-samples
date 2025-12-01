#include <stdio.h>

int main(){
   
    char harf; 

    printf("Lutfen bir harf girin:");
    scanf(" %c", &harf); 

    switch(harf){
        case 'A':
             printf("bir sesli harftir");
            break;
        case 'a':
             printf("bir sesli harftir");
            break;
        case 'E':
             printf("bir sesli harftir");
            break;
        case 'e':
             printf("bir sesli harftir");
            break;
        case 'O':
             printf("bir sesli harftir");
            break;
        case 'o':
             printf("bir sesli harftir");
            break;
        case 'U':
             printf("bir sesli harftir");
            break;
        case 'u':
            printf("bir sesli harftir");
            break;
            
        default:
            printf("sessiz harftir veya gecerli bir harf degildir");
            break;
    }

    return 0;
}
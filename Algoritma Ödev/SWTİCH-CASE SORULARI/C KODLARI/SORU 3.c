#include <stdio.h>

int main(){
   
    int ay;
    
    printf("ay numarasini girin:");
    scanf("%d", &ay);

    switch (ay) {
        case 1:
            printf("Ay Adi:Ocak\n");
            break;
        case 2:
            printf("Ay Adi:Subat\n");
            break;
        case 3:
            printf("Ay Adi:Mart\n");
            break;
        case 4:
            printf("Ay Adi:Nisan\n");
            break;
        case 5:
            printf("Ay Adi:Mayis\n");
            break;
        case 6:
            printf("Ay Adi:Haziran\n");
            break;
        case 7:
            printf("Ay Adi:Temmuz\n");
            break;
        case 8:
            printf("Ay Adi:Agustos\n");
            break;
        case 9:
            printf("Ay Adi:Eylul\n");
            break;
        case 10:
            printf("Ay Adi:Ekim\n");
            break;
        case 11:
            printf("Ay Adi:Kasim\n");
            break;
        case 12:
            printf("Ay Adi:Aralik\n");
            break;
        default:
            printf("Geçerli ay numarası girin.\n");
            break; 
    }
    return 0;
}
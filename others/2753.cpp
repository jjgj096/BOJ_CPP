#include <stdio.h>

int main(void){
    int y;
    scanf("%d", &y);

    if((y%4==0) && (y%100 != 0)){
        printf("1\n");
    }
    else if ((y%4==0) && (y%400 == 0)){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;

    // if(n%400==0) printf("1\n");
    // else if(n%100==0) printf("0\n");
    // else if(n%4==0) printf("1\n");
    // else printf("0\n")
}
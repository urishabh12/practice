#include <stdio.h>

void main(){
    int inp, temp;
    scanf("%d",&inp);
    if (inp >= 0){
        printf("%d",inp);
    }
    else{
        inp = (-1) * inp;
        if (inp%10 > inp%100){
            temp = inp/10;
            printf("%d",temp);
        }
        else{
            temp = inp/100;
            temp = temp*10;
            temp = temp+(inp%10);
            printf("%d",temp);
        }
    }
}
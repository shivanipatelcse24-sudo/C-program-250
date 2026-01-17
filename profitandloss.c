#include<stdio.h>
int main(){
    int cp,sp,amount;
    printf("enter the cp");
    scanf("%d",& cp);
    printf("enter the sp");
    scanf("%d",& sp);
    if(sp>cp){
        amount= sp-cp;
        printf("%d is the profit",amount);
    }else if(cp>sp){
        amount=cp-sp;
        printf("%d is the loss",amount);
    }else{
        printf("not profit or loss");
    }
    return 0; 
}
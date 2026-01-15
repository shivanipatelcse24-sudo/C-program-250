#include<stdio.h>
int main(){
    int a,b;
    printf("enter any two numbers");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("%d is a greater number \n",a);
    }else{
        printf("%d is a greater number \n",b);
    }
    return 0;
}
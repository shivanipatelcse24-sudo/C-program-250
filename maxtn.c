#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is the maximum number",a);
    
    }else if(b>a) {
        printf("%d is the maximum number ",b);
    }else{
        printf("%d  both number is equal",a,b); 
    }
    return 0; 
}
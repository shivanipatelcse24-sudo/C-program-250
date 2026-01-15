#include<stdio.h>
int main(){
    int n;
    printf("enter a integer ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative .\n",n);
        
    }else{
        printf("%d is positive .\n",n);
    }
    return 0; 
}
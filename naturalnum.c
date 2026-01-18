#include<stdio.h>
int main(){
    int i, n,sum;
    printf("enter a positive integer n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
      }

     printf("%d%d",n,sum);
    return 0;
}
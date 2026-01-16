#include<stdio.h>
int main(){
    int  angle1,angle2,angle3,sum;
    printf("enter three angle of a triangle\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180 && angle1>0 && angle2>0 && angle3>0){
        printf(" it is valid triangle");
    }else{
        printf("it is not valid triangle");
    }
    return 0;
}
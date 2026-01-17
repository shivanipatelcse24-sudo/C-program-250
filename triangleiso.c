#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter three sides of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3){
        printf("this is a equivalateral triangle\n");
    }else if(side1==side2 ||side1==side3||side2==side3){
        printf("this is a isosceles triangle\n");
    }else{
        printf("this is a scalene triangle\n");
    }
    return 0;
}
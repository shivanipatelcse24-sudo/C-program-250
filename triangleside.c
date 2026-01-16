#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter three side of trianle");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2))
    {
        printf("this is a valid triangle");

    }
     else
    {
        printf("this is a not valid triangle");
    }
    return 0;

}

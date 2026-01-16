#include<stdio.h>
int main(){
    int month_num;
    printf("enter month_num\n");
    scanf("%d",&month_num);
    if(month_num==1){
        printf("28 days or 29 days");
    }else if(month_num==4 || month_num==6 || month_num==9 ||month_num==11){
        printf("30 days");
    }else if(month_num==2|| month_num==3 || month_num==5 ||month_num==7 || month_num==8|| month_num==10 ||month_num==12)

       { printf("31 days");
    }
    return 0;
}
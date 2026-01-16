#include<stdio.h>
int main(){
    int month_num;
    printf("enter month_num\n");
    scanf("%d",&month_num);
    if(month_num==1){
      printf("31 days");  
    }else if(month_num==2){
      printf("28 days or 29 days");
    }else if(month_num==3){
      printf("31 days");
    }else if(month_num==4){
      printf("30 days");
    }else if(month_num==5){
      printf("31 days");
    }else if(month_num==6){
      printf("30 days");
    }else if(month_num==7){
      printf("31 days");
    }else if(month_num==8){
      printf("31 days");
    }else if(month_num==9){
      printf("30 days");
    }else if(month_num==10){
      printf("31 days");
    }else if(month_num==11){
      printf("31 days");
    }else if(month_num==12){
      printf("31 days");
    }else {
      printf(" invalid input");
    }
    return 0;
    
}
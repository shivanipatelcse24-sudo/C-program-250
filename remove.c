#include<stdio.h>
int main(){
    int arr[10] = {10,20,30,40,50};
    int size = 5;
    int element = 25;
    int position = 2;
    if (position>= 0 && position <= size && size<10){
        for(int i=size; i>= position ; i--){
            arr[i]= arr[i-1];
        }
        arr[position] = element;
        size++;
        printf("array after insertion \n");
        for(int i =0; i<size; i++){
            printf("%d", arr[i]);
        }
        printf("\n");
    }else{
            printf("invalid position or array is full.\n");
        }
        return 0;
        

        
    
}

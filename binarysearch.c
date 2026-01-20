#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        
        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    
    return -1; 
}

int main() {
    
    int array[] = {10, 20, 30, 40, 50, 70, 80, 90}; 
    int key = 30;
    int size = sizeof(array) / sizeof(array[0]);
    
    int result = binarySearch(array, size, key);
    
    if (result != -1) {
        printf("Element %d is present at index %d.\\n", key, result);
    } else {
        printf("Element %d is not present in the array.\\n", key);
    }
    
    return 0;
}
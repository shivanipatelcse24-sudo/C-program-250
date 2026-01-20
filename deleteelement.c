#include <stdio.h>
int main() { 
    int arr[50], i, position, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position (1 to %d) where to delete the element: ", size);
    scanf("%d", &position);
    if (position < 1 || position > size) {
        printf("\nDeletion is not possible. Invalid position entered.\n");
    } else {
    
        for (i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        
        size--;

        printf("\nThe array after deleting the element is: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
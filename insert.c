#include <stdio.h>

int main() {
    
    int array[100]; 
    int i, n, value, position;
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the position (1-based index) to insert: ");
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
    } else {
        
        for (i = n - 1; i >= position - 1; i--) {
            array[i + 1] = array[i];
        }
        array[position - 1] = value;
         n++;

        
        printf("Resultant array is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[100]; 
 	int i;
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The squares are: ");
    for (i=0; i<size; i++) {
        int square = arr[i] * arr[i];
        printf("%d", square);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}


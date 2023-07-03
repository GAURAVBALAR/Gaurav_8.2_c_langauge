#include <stdio.h>
void  main() {
    int sizeA, sizeB, sizeC, i, j;

    
    printf("Enter array A's size: ");
    scanf("%d", &sizeA);

    int arrayA[sizeA];

    printf("Enter array A's elements:\n");
    for (i = 0; i < sizeA; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("\nEnter array B's size: ");
    scanf("%d", &sizeB);

    int arrayB[sizeB];

    printf("Enter array B's elements:\n");
    for (i = 0; i < sizeB; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }

    sizeC = sizeA + sizeB;

    int mergedArray[sizeC];

    
    for (i = 0; i < sizeA; i++) {
        mergedArray[i] = arrayA[i];
    }

   
    for (i = 0, j = sizeA; i < sizeB; i++, j++) {
        mergedArray[j] = arrayB[i];
    }

    printf("\nArray C is: ");
    for (i = 0; i < sizeC; i++) {
        printf("%d", mergedArray[i]);
        if (i < sizeC - 1) {
            printf(", ");
        }
    }
    printf("\n");

    
}


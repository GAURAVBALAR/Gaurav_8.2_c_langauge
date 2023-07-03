#include <stdio.h>

int main() {
    int f,s;
    printf("Enter the first number: ");
    scanf("%d", &f);

    printf("Enter the second number: ");
    scanf("%d", &s);

    int leapYears[100];
    int count = 0;
    int j;

    for (j= f; j<= s;j++) {
        if ((j % 4 == 0 && j % 100 != 0) || j % 400 == 0) {
            leapYears[count++] = j;
        }
    }
    int i;
	printf("The array is: ");
    for ( i = 0; i < count; i++) {
        printf("%d", leapYears[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");

return 0;    
}


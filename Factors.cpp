#include <stdio.h>
//program to find factors of given number
int main() {
    int a, k = 0, i;
    char continueOption = 'y';

    while (continueOption == 'y' || continueOption == 'Y') {
        printf("\tFACTORS\n");
        printf("Enter the number: ");
        scanf("%d", &a);
        int arr[a];
        for (i = 1; i <= a; i++) {
            if (a % i == 0) {
                arr[k] = i;
                k++;
            }
        }
        printf("Factors are: ");
        for (i = 0; i < k; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &continueOption);
    }
    return 0;
}

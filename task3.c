#include <stdio.h>
#include <stdlib.h>

int main() {
    int *samples = NULL;
    int C = 0;
    char choice;
    int sum = 0;
    float average;

    samples = (int*)malloc(sizeof(int));

    do {
        printf("Enter a sample integer value: ");
        scanf("%d", &samples[C]);

        sum += samples[C];
        C++;

        printf("Do you want to add more samples? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            samples = (int*)realloc(samples, (C + 1) * sizeof(int));
        }

    } while (choice == 'y' || choice == 'Y');

    average = sum / (float)C;

    printf("\nYou entered the following samples: ");
    for (int i = 0; i < C; i++) {
        printf("%d ", samples[i]);
    }

    printf("\nCalculated average (DC value): %.2f\n", average);

    printf("Final adjusted samples after DC shift: ");
    for (int i = 0; i < C; i++) {
        printf("%.2f ", samples[i] - average);
    }

    free(samples);

    return 0;
}

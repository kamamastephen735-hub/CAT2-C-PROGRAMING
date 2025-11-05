/*
NAME STEPHEN M KAMAMA
REG NO CT100/G/26355
DESCRIPTION A NESTER LOOP
*/
#include <stdio.h>

int main() {
    // Declare and initialize the first 2x2 array
    int scores1[2][2] = { {65, 92}, {84, 72} };

    // Declare and initialize the second 2x2 array
    int scores2[2][2] = { {35, 70}, {59, 67} };

    int i, j;

    // Print the first array
    printf("Scores1 array:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }

    // Print the second array
    printf("\nScores2 array:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Name STEPHEN M KAMAMA 
Reg no CT100/G/26235/25
COURSE BSC IT 
DESCRIPTION A LIST OF INTEGERS FROM A FILE , PROCESSES, WRITES RESULTS TO A DIFFERENT FILE
*/

#include <stdio.h>
#include <stdlib.h>

void writeIntegersToFile();
void processIntegers();
void displayFiles();

int main() {
    writeIntegersToFile();
    processIntegers();
    displayFiles();
    return 0;
}

// 1. Function to prompt user to input 10 integers and store them in input.txt
void writeIntegersToFile() {
    FILE *fptr;
    int num, i;

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file input.txt for writing.\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fptr, "%d ", num);
    }

    fclose(fptr);
    printf("\nData written successfully to input.txt\n\n");
}

// 2. Function to read from input.txt, calculate sum and average, and write to output.txt
void processIntegers() {
    FILE *infile, *outfile;
    int num, count = 0, sum = 0;
    float average;

    infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);
    }

    while (fscanf(infile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(infile);

    if (count == 0) {
        printf("No numbers found in input.txt\n");
        return;
    }

    average = (float)sum / count;

    outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error opening output.txt for writing.\n");
        exit(1);
    }

    fprintf(outfile, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(outfile);

    printf("Results written successfully to output.txt\n\n");
}

// 3. Function to display contents of both input.txt and output.txt
void displayFiles() {
    FILE *fptr;
    char ch;

    printf("Contents of input.txt:\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt.\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\n\nContents of output.txt:\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt.\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\n");
}
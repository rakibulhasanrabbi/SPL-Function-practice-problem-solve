#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void Get_Number_And_Base(int *N, int *B);
void Convert_Number(int N, int B, char *converted);
void Show_Converted_Number(int N, int B, char *converted);

int main() {
    int N, B;
    char converted[100];

    while (1) {
        Get_Number_And_Base(&N, &B);

        if (N == 0 && B == 0) {
            break;
        }

        Convert_Number(N, B, converted);
        Show_Converted_Number(N, B, converted);
    }

    return 0;
}


void Get_Number_And_Base(int *N, int *B) {
    do {
        printf("Enter the number to convert (N): ");
        scanf("%d", N);
        if (*N < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (*N < 0);

    do {
        printf("Enter the base to convert to (between 2 and 16): ");
        scanf("%d", B);
        if (*B < 2 || *B > 16) {
            printf("Base must be between 2 and 16.\n");
        }
    } while (*B < 2 || *B > 16);
}


void Convert_Number(int N, int B, char *converted) {
    char digits[] = "0123456789ABCDEF";
    int index = 0;


    if (N == 0) {
        converted[index++] = '0';
        converted[index] = '\0';
        return;
    }


    while (N > 0) {
        converted[index++] = digits[N % B];
        N /= B;
    }


    for (int i = 0; i < index / 2; i++) {
        char temp = converted[i];
        converted[i] = converted[index - 1 - i];
        converted[index - 1 - i] = temp;
    }

    converted[index] = '\0';
}

// Function to display the original number (N) and its converted value in base (B)
void Show_Converted_Number(int N, int B, char *converted) {
    printf("%d in base %d is: %s\n", N, B, converted);
}

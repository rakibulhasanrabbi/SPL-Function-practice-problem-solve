#include <stdio.h>

int calculateSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        {
        sum += arr[i];
    }

    printf("Sum In Function: %d\n", sum);
    return sum;
}


int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
    }


    int sum = calculateSum(arr, n);
    printf("Sum In Main: %d\n", sum);

    return 0;
}

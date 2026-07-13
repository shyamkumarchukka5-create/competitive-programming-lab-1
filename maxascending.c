#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            sum = sum + arr[i];
        } else {
            sum = arr[i];
        }

        if (sum > max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}


#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);

    int arr2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int merge[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merge[k] = arr1[i];
            i++;
        } else {
            merge[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        merge[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        merge[k] = arr2[j];
        j++;
        k++;
    }

    for (i = 0; i < n + m; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}


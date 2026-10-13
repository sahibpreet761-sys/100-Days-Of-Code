
#include <stdio.h>

int main() {
    int a[100], n, i, largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n < 2) {
        printf("At least two elements are required");
        return 0;
    }

    largest = second = -2147483648;

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    if (second == -2147483648) {
        printf("No second largest distinct element");
    } else {
        printf("Second largest element = %d", second);
    }

    return 0;
}

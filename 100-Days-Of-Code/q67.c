
#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        printf("Invalid position or array is full.");
        return 0;
    }

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

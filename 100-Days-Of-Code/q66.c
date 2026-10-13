
#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    pos = n;

    while (pos > 0 && a[pos - 1] > element)
    {
        a[pos] = a[pos - 1];
        pos--;
    }

    a[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

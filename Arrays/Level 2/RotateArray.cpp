#include <stdio.h>

void reverse(int a[], int start, int end)
{
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int d, int n)
{
    d = d % n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n, d;

        scanf("%d%d", &n, &d);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        rotateArr(arr, d, n);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int binarysrch(int arr[], int beg, int end, int key) {
    if (beg > end)
        return -1;

    int mid = (beg + end) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarysrch(arr, beg, mid - 1, key);
    else
        return binarysrch(arr, mid + 1, end, key);
}

int main() {
    int n, key, index;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array in ascending order:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the key to search:\n");
    scanf("%d", &key);
    int beg=0,end=n-1;

    index = binarysrch(a,beg,end,key);

    if (index != -1)
        printf("%d is found at location %d\n", key, index + 1);
    else
        printf("%d is not found in the array\n", key);

    return 0;
}

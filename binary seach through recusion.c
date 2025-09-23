#include<stdio.h>

void BS(int arr[], int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    BS(arr, n - 1);
}

int BS(int arr[], int low, int high, int val) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == val)
        return mid;
    else if (arr[mid] > val)
        return BS(arr, low, mid - 1, val);
    else
        return BS(arr, mid + 1, high, val);
}

int main() {
    int size, val, i, fb;

    printf("Enter the Size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        printf("Enter the %d Value: ", i+1);
        scanf("%d", &arr[i]);
    }

    BS(arr, size);

    printf("Sorted array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the value to search for: ");
    scanf("%d", &val);

    int result = BS(arr, 0, size - 1, val);

    if(result != -1) {
        printf("Element %d found at position %d.\n", val, result + 1);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}


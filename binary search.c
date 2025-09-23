#include<stdio.h>

int main() {
    int size, a, val, i, fb, j;
    printf("Enter the Size of array: ");
    scanf("%d", &size);
        int arr[size];
        printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        printf("Enter the %d Value: ", i+1);
        scanf("%d", &arr[i]);
    }
     for(i = 0; i < size - 1; i++) {
        for( j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter the value to search for: ");
    scanf("%d", &val);

    int low = 0, high = size - 1, mid;
    fb = 0;  
        while(low <= high) {
        mid = (low + high) / 2;
                if(arr[mid] == val) {
            printf("Element %d found at position %d.\n", val, mid + 1);
            fb = 1;
            break;
        }
            else if(arr[mid] > val) {
            high = mid - 1;
        }
            else {
            low = mid + 1;
        }
    }
    
     if(fb == 0) {
        printf("Element not found.\n");
    }
    return 0;
}


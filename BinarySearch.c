#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(a) / sizeof(a[0]);
    int key, low = 0, high = size - 1, mid, result = -1;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (a[mid] == key) {
            result = mid;
            break;
        }
        if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

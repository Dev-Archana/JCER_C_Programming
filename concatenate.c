// Program to concatenate two arrays into a third array

#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 5, 3, 2, 1};
    int b[] = {6, 7, 8, 9};
    int s1 = sizeof(a) / sizeof(a[0]);
    int s2 = sizeof(b) / sizeof(b[0]);
    int s3 = s1 + s2;
    int c[s3];

    for (int i = 0; i < s1; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < s2; i++) {
        c[s1 + i] = b[i];
    }

    printf("Concatenated Array (c):\n");
    for (int i = 0; i < s3; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

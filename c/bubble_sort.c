#include <stdio.h>
#include <stdlib.h>

// ./a.out 8 4 3 6 1 2
int main(int argc, char** argv) {
    int len = argc - 1;
    int arr[len]; 
    int i, j, t;
    for (i = 0; i < len; i++) {
        arr[i] = atoi(argv[i+1]);
    }

    printf("before sort:");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (arr[i] > arr[j]) {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }

    printf("after sort:");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


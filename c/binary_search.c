#include <stdio.h>

static void binary_search(int arr[], int len, int n) {
    int i;

    printf("\narr=");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf(",n=%d\n", n);

    int l=0, r=len-1, m;
    while (l <= r) {
        m = l + (r - l) / 2;
        printf("debug: l=%d r=%d m=%d arr[m]=%d n=%d\n", l, r, m, arr[m], n);

        if (n == arr[m]) {
            printf("found: %d %d\n", m, n);
            return; 
        } else if (n < arr[m]){
            r = m-1;
        } else if (n > arr[m]) {
            l = m+1;
        }
    }
    printf("not found: %d \n", n);
}

int main(int argc, char** argv) {
    int arr[] = {};
    binary_search(arr, 0, 3);
    
    int arr2[] = {3};
    binary_search(arr2, 1, 3);

    int arr3[] = {1, 3};
    binary_search(arr3, 2, 3);

    int arr4[] = {3, 5};
    binary_search(arr4, 2, 3);

    int arr5[] = {1, 5};
    binary_search(arr5, 2, 3);
    
    int arr6[] = {2, 4, 6, 8};
    binary_search(arr6, 4, 3);

    int arr7[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    binary_search(arr7, 9, 3);
    
    return 0;
}

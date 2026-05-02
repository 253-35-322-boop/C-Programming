#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 40, 50};
    int n = 4;      
    int pos = 2;
    int value = 30;
   for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
 arr[pos] = value;
    n++;
    printf("new arry : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
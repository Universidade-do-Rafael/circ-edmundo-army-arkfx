#include <stdio.h>

int main() {
    int arr[100];
    
    for (int i = 1; i <= 100; i++) {
        arr[i] = i;
    }

    //SCANF 'N' AND 'M' VALUES
    //N = NUMBER OF ELEMENTS
    //M = STEPS TO REMOVE ELEMENTS
    //ITERATE THROUGH THE ARRAY 'M' TIMES AND REMOVE THE ELEMENTS
    //REPEAT UNTIL ONLY ONE ELEMENT IS LEFT
    //PRINT THE LAST ELEMENT

    int n, m;
    scanf("%d %d", &n, &m);
    removeElement(arr, n, m);
    printLastElement(arr, n);

    
    return 0;
}

void removeElement(int arr[], int n, int m) {
    int count = 0;
    int i = 0;
    while (count < n) {
        if (arr[i] != 0) {
            count++;
        }
        if (count == m) {
            arr[i] = 0;
            count = 0;
        }
        i++;
        if (i == n) {
            i = 0;
        }
    }
}

void printLastElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            printf("%d", arr[i]);
        }
    }
}
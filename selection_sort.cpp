#include<stdio.h>

int arr[100];

void swapElements(int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void selectionSort(int n) {
    for(int i = 0; i < n; i++) {
        int minimum = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minimum]) {
                minimum = j;
            }
        }
        if(minimum != i) {
            swapElements(minimum, i);
        }
    }
}

void printArray(int n) {
    for(int i = 0; i < n; i++) {
        printf("%d |", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(n);
    selectionSort(n);
    printArray(n);
}

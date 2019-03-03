#include<stdio.h>

int arr[100];

void swapElements(int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void bubbleSort(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1])
                swapElements(j, j + 1);
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
    bubbleSort(n);
    printArray(n);
}

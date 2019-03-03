#include<stdio.h>

int arr[100];

void swapElements(int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

// checking j index element to ( 0 to i - 1 ) index elements , if greater then swap else break;
void insertionSort(int n) {
    for(int i = 1; i < n; i++) {
        int current = i;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[current] < arr[j]) {
                swapElements(current, j);
                current = j;
            }
            else break;
        }

    }
}

void insertionSortSecondTime(int n) {
    for(int i = 1; i < n; i ++) {
        int current = i;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[current] < arr[j]) {
                swapElements(j, current);
                current = j;
            } else break;
        }
    }
}

void printArray(int n) {
    for(int i = 0; i < n; i++) {
        printf("| %d |", arr[i]);
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
    //insertionSort(n);
    insertionSortSecondTime(n);
    printArray(n);

}

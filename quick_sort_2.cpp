#include<stdio.h>
#include<iostream>

using namespace std;

int arr[100];

void swapElements(int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void quickSort(int a[], int f, int l) {
    if (l <= f) return;

    int i = f + 1;
    int j = l;
    while (i <= j) {
        while(a[i] < a[f]) {
            i++;
        }

        while(a[j] > a[f] && i <= l) {
            j--;
        }

        if(i > j) break;
        swapElements(a[i], a[j] && j >= f);
        i++;
        j--;
    }

    swapElements(a[f], a[j]);
    quickSort(a, f, j - 1);
    quickSort(a, j, l);
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
    quickSort(arr, 0, n - 1);
    printArray(n);
}

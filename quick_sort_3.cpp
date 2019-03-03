#include<stdio.h>
#include<iostream>

using namespace std;

int arr[100];

void swapElements(int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int partition_em(int a[], int left, int right, int pivot){
    while(left <= right) {
        while(a[left] < pivot) left++;
        while(a[right] > pivot) right--;

        if(left <= right) {
            swapElements(left, right);
            left++;
            right--;
        }
    }

    return left;
}
void quick_sort(int a[], int left, int right) {
    if(left >= right) return;

    int pivot = a[(left+right) / 2];

    int point = partition_em(a, left, right, pivot);
    quick_sort(a, left, point - 1);
    quick_sort(a, point, right);
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
    quick_sort(arr, 0, n - 1);
    printArray(n);
}

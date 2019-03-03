#include<stdio.h>
#include<stdlib.h>

int search_element(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
        }
    return -1;
}

int insert_element(int arr[], int n, int capacity, int value) {
    if(capacity <= n) return n;
    else {
        arr[n] = value;
        return n + 1;
    }
}

int delete_element(int arr[], int n, int capacity, int value) {
    int index = search_element(arr, capacity, value);
    if(index == -1) return n;
    else{
        for(int i = index; i < n; i++) {
        arr[i] = arr[i + 1];
        }
        return n - 1;
    }
}
void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf(" %d |", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[10];
    int n = 0, choices, capacity = 10, value, d, q = 1;
    /*//driving search
    int d = search_element(arr, 10, 12);
    printf("Index : %d\nPoesition : %d\n", d, d + 1);

    //driving insert
    print_array(arr, n);
    n = insert_element(arr, n, 10, 23);
    print_array(arr, n);

    //driving deletion
    print_array(arr, n);
    n = delete_element(arr, n, 10, 0);
    print_array(arr, n);*/
    while(q) {
        printf("1.Insert\n2.Find\n3.Delete\n4.Exit\n");
        scanf("%d", &choices);

        switch(choices) {
            case 1:
                printf("Value to insert : \n");
                scanf("%d", &value);
                n = insert_element(arr, n, 10, value);
                print_array(arr, n);
                break;
            case 2:
                printf("Value to find : \n");
                scanf("%d", &value);
                d = search_element(arr, 10, value);
                printf("Index : %d\nPoesition : %d\n", d, d + 1);
                break;
            case 3:
                printf("Value to delete : \n");
                scanf("%d", &value);
                n = delete_element(arr, n, 10, value);
                print_array(arr, n);
                break;
            case 4:
                q = 0;
                break;
        }
    }
    return 0;
}


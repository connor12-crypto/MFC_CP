#include <stdio.h>
#include <time.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n =100;
    int arr[n],arr1[n], arr2[n], arr3[n];;
    for(int i=0;i<n;i++){
        arr[i]=10000-i;
    }
    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
        arr2[i] = arr[i];
        arr3[i] = arr[i];
    }
    clock_t start, end;
    double time_taken;
    start = clock();    // Bubble sort
    bubbleSort(arr1, n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble sort: Time taken: %f seconds\n", time_taken);
    start = clock();    // Selection sort
    selectionSort(arr2, n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection sort: Time taken: %f seconds\n", time_taken);
    start = clock();   // Insertion Sort
    insertionSort(arr3, n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Insertion sort: Time taken: %f seconds\n", time_taken);
    return 0;
}

#include <iostream>
#include"Header.h"

using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int i, j, k;
    int size1 = mid - start + 1;
    int size2 = end - mid;

    int* arrL = new int[size1];
    int* arrR = new int[size2];

    for (i = 0; i < size1; i++)
        arrL[i] = arr[start + i];
    for (j = 0; j < size2; j++)
        arrR[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = start;
    while (i < size1 && j < size2) {
        if (arrL[i] <= arrR[j]) {
            arr[k] = arrL[i];
            i++;
        }
        else {
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        arr[k] = arrL[i];
        i++;
        k++;
    }

    while (j < size2) {
        arr[k] = arrR[j];
        j++;
        k++;
    }
}

int* mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    return arr;
}

bool mergeSortTest(int* test_array, int* check_array, int size) {
    for (int i = 0; i < size; i++) {
        if (test_array[i] != check_array[i]) {
            return false;
        }
        else
        {
            return true;
        }
    }
}

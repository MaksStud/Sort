#include <iostream>
#include <cstdlib>
#include <ctime>
#include"Header.h"

using namespace std;

void shuffle(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size - 1; i++) {
        int j = i + rand() % (size - i);
        std::swap(arr[i], arr[j]);
    }
}

int* randomSort(int arr[], int size) {
    shuffle(arr, size);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

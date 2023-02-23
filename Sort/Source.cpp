#include <iostream>
#include"Header.h"

using namespace std;

bool SortTest(int* test_array, int* check_array, int size);
void print(int* arr, int n);

int main() {

    int arr1[7] = {-100, -54, -9, 0, 8, 77, 600};
    int arr1Not[7] = { 77, -54, -9, 600, 8, -100, 0 };

    cout << "Enter array: ";
    print(arr1Not, 7);
    cout << endl;

    randomSort(arr1Not, 7);

    cout << "Sort array: ";
    print(arr1Not, 7);
    cout << endl;


    cout << "Sort Test: ";
    cout << SortTest(arr1Not, arr1, 7);
    cout << endl;

    system("pause");
    return 0;
}


void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

bool SortTest(int* test_array, int* check_array, int size) {
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

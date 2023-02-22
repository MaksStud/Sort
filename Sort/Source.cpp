#include <iostream>
#include"Header.h"

using namespace std;

bool SortTest(int* test_array, int* check_array, int size);

int main() {

    int arr1[6] = { 1, 7, 15, 20, 21, 65 };
    int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arr3[5] = {-101, -45, 0, 5, 22};

    int arr1NotSort[6] = { 20, 65, 15, 1, 21, 7 };
    int arr2NotSort[10] = { 7, 10, 3, 6, 5, 4, 1, 8, 2, 9 };
    int arr3NotSort[5] = { 0, -101, -45, 22, 5 };

    mergeSort(arr1NotSort, 0, 5 );
    mergeSort(arr2NotSort, 0, 9 );
    mergeSort(arr3NotSort, 0, 4 );

    cout << SortTest(arr1NotSort, arr1, 6) << endl;
    cout << SortTest(arr2NotSort, arr2, 10) << endl;
    cout << SortTest(arr3NotSort, arr3, 5) << endl;

    int arr4[6] = { 1, 7, 15, 20, 21, 65 };
    int arr5[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arr6[5] = { -101, -45, 0, 5, 22 };

    int arr4NotSort[6] = { 20, 65, 15, 1, 21, 7 };
    int arr5NotSort[10] = { 7, 10, 3, 6, 5, 4, 1, 8, 2, 9 };
    int arr6NotSort[5] = { 0, -101, -45, 22, 5 };

    randomSort(arr4NotSort, 6);
    randomSort(arr5NotSort, 10);
    randomSort(arr6NotSort, 5);

    cout << SortTest(arr4NotSort, arr4, 6) << endl;
    cout << SortTest(arr5NotSort, arr5, 10) << endl;
    cout << SortTest(arr6NotSort, arr6, 5) << endl;
  



    cout << endl;
    system("pause");
    return 0;
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

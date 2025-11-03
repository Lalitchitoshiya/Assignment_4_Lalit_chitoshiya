#include "sorting.h"
void bubbleSort(int arr[], int n) {
    // Bubble sorting
    for (int i = 0; i < n; i++) // number of passes
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , ";
    }
}

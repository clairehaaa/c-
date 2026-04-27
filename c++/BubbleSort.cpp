#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    int temp;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {14, 33, 27, 35, 10};
    int n = 5;

    bubbleSort(arr, n);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

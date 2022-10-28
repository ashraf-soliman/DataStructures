/*
Modified Bubble Sort algorithm
TC = O(n)
SC = O(1)
*/

#include <iostream>
using namespace std;


void modified_bubble_sort (int arr[], int n) {
    int i = 0;
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = false;
            }
        }
        i++;
    }
}

int main() {
    int arr[] = {3,5,1,7,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Modified Bubble Sort: " << endl;
    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    modified_bubble_sort (arr, n);
    
    cout << "After Modified Bubble Sort: " << endl;
    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

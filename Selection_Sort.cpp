/*
Selection Sort algorithm
TC = O(n^2)
SC = O(1)
*/

#include <iostream>
using namespace std;

void selection_sort (int arr[], int n) {
	
   int min_indx = 0;
   
   for (int i = 0; i < n; i++){
		 
       min_indx = i;
       
       for (int j = i+1; j < n; j++){ 
            if (arr[j] < arr[min_indx]){
                min_indx = j;
            }
       }
       
        if (min_indx != i){
            int temp = arr[min_indx];
            arr[min_indx] = arr[i];
            arr[i] = temp;
        }
   }
}

int main() {
	
    int arr[] = {3,5,1,7,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Selection Sort: " << endl;
    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selection_sort (arr, n);
    
    cout << "After Selection Sort: " << endl;
    for (int i = 0 ; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

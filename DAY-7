#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int n,m,k;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++){
      cin >> arr1[i];
    }
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    cin  >>m;
    int arr2[m];
    for(int i=0; i<n; i++){
      cin >> arr2[i];
    }
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    cin >> k;
    int arr3[n];
    for(int i=0; i<n; i++){
      cin >> arr3[i];
    }
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Maximum value in arr1: " << findMax(arr1, size1) << endl;
    cout << "Maximum value in arr2: " << findMax(arr2, size2) << endl;
  
    cout << "Maximum value in arr3: " << findMax(arr3, size3) << endl;
  

    return 0;
}

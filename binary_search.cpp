#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int linear_search(int n, int arr[], int key) {

    int start = 0, end = n - 1; // Fix: Initialize 'end' to n - 1
    while (start <= end) {
        int mid = start + (end - start) / 2;
        // Fix: Correct calculation of mid
        
        if (arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else if (arr[mid] > key) { 
            // Fix: Use 'else if' here
            end = mid - 1;
        }
    }
    // if while loop ends and no value is returned
    return -1;
}

int main() {

    int n, key;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Input element to be searched: ";
    cin >> key;
    int index = linear_search(n, arr, key);
    
    if (index == -1) {
        cout << "Element not in array";
    }
    else {
        cout << "Element is at index " << index;
        // Fix: Corrected the output message
    }

    return 0;
}

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findSecondLargestAndSmallest(int arr[], int size) {
    if (size < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }

    sort(arr, arr + size); 

    int secondSmallest = arr[0], secondLargest = arr[size - 1];

    // Find second smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] != arr[size - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    cout << "Second smallest element: " << secondSmallest << endl;
    cout << "Second largest element: " << secondLargest << endl;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 1) {
        cout << "Invalid size. Please enter a positive number." << endl;
        return 1;
    }

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    findSecondLargestAndSmallest(arr, size);

    return 0;
}
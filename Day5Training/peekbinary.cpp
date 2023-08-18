#include <iostream>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n) {
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeakElement(arr, low, mid - 1, n);

    return findPeakElement(arr, mid + 1, high, n);
}

int main() {
    int arr[10], n;
    cout << "\n***FIND PEEK ELEMENT USING BINARY SEARCH***\n";
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = findPeakElement(arr, 0, n - 1, n);

    if (peakIndex >= 0) {
        cout << "The peak element is: " << arr[peakIndex] << " at index " << peakIndex << "\n";
    } else {
        cout << "PEEK ELEMENT NOT FOUND!!!\n";
    }

    return 0;
}

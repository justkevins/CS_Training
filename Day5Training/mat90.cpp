#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter Row: ";
    cin >> r;
    cout << "Enter Column: ";
    cin >> c;

    int arr[10][10];
    cout << "Enter matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe matrix after 90 rotation is:\n";
    for (int i = 0; i < c; i++) {
        for (int j = r-1; j >= 0; j--) {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }

}
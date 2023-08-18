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

    cout << "\nThe given matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nDiagonal/Upper/Lower/Non-Diagonal elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                cout << "Diagonal: " << arr[i][j] << "\t";
            } else if (j > i) {
                cout << "Upper Diagonal: " << arr[i][j] << "\t";
            } else if (j < i) {
                cout << "Lower Diagonal: " << arr[i][j] << "\t";
            } else {
                cout << "Non-Diagonal: " << arr[i][j] << "\t";
            }
        }
        cout << "\n";
    }

    return 0;
}

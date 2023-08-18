#include <iostream>
#include <string>
using namespace std;

int main() {
    string ch;
    int i, len = 0, j, n;
    cout << "\nEnter string: ";
    getline(cin, ch);
    n = ch.size();

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (ch[i] == ch[j]) {
                for (int k = j; k < n - 1; k++) {
                    ch[k] = ch[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    len = n;  // Update the length after removing duplicates

    cout << "String after reverse: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << ch[i];
    }

    return 0;
}

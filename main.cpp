#include <iostream>
using namespace std;

int main() {
    int prev, current;

    cout << "Enter a value: ";
    cin >> prev;

    while (true) {
        cout << "Enter a value: ";
        cin >> current;

        if (current <= prev) {
            cout << current << " ";
        } else {
            cout << endl;
            break;
        }

        prev = current;
    }

    return 0;
}
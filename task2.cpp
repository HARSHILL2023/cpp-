#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a value to check: ";
    cin >> n;

    int original = n;   // store original number
    int reverse = 0;

    while (n != 0) {
        reverse = (reverse * 10) + n % 10;
        n = n / 10;
    }

    if (reverse == original) {
        cout << "yes (palindrome)" << endl;
    } else {
        cout << "no (not palindrome)" << endl;
    }

    return 0;
}

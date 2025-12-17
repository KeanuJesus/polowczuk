#include <iostream>
#include "fibonacci.h"

using namespace std;

int main() {
    int n;
    cout << "podaj n: " << endl;
    if (!(cin >> n)) {
        cout << "bledne dane" << endl;
        return 1;
    }
    if (n < 0) {
        cout << "n musi byc >= 0" << endl;
        return 1;
    }
    cout << "f(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

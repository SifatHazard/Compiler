#include <iostream>
using namespace std;

bool even(int n) {
    return n % 2 == 0;
}

bool prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void checkNumber(int n) {
    cout << "Number: " << n << endl;

    if (n > 0) cout << "Positive" << endl;
    else if (n < 0) cout << "Negative" << endl;
    else cout << "Zero" << endl;

    if (even(n)) cout << "Even" << endl;
    else cout << "Odd" << endl;

    if (prime(n)) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
}

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    if (cin.fail()) {
        cout << "Invalid input! Please enter a valid integer." << endl;
        return 1;
    }

    checkNumber(x);

    return 0;
}

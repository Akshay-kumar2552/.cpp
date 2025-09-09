#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int nextNum = num + 1;

    while (true) {
        if (isPrime(nextNum)) {
            cout << "The next prime number after " << num << " is: " << nextNum;
            break;
        }
        nextNum++;
    }

    return 0;
}


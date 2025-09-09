#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

  
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

   
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

  
    if ((int)result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}


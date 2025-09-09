#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 1000 are: "<<endl<<endl;

    for (int num = 1; num < 1000; num++) {
        int originalNum = num;
        int remainder, n = 0;
        double result = 0.0;

      
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
            cout << originalNum << "  ";
    }

    return 0;
}


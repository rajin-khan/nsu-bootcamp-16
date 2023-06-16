#include <iostream>

using namespace std;

int sumOfDigits(int num) {

    int sum = num;

    while (num!=0) {

        sum+=num%10;
        num/=10;
    }

    return sum;
}

bool selfNumber(int num) {

    for (int i=1; i<num; i++) {

        if (sumOfDigits(i) == num) {

            return false;
        }
    }
    return true;
}

int main() {

    int n = 10000;

    for (int i=1; i<=n; i++) {

        if (selfNumber(i)) {

            cout << i << endl;
        }
    }

    return 0;
}

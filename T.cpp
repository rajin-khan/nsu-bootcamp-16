#include<iostream>

using namespace std;

int main() {

    int luckCount = 0, lastDigit;

    long long int n;

    cin >> n;

    while (n>10) {

        lastDigit = n%10;

        if (lastDigit==4 || lastDigit==7) {

            luckCount++;
        }

        n/=10;
    }

    if (n==4 || n==7) {

        luckCount++;
    }

    if (luckCount==4 || luckCount==7) {

        cout << "YES";
    }
    else {

        cout << "NO";
    }

    return 0;
}
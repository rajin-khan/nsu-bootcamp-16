#include<iostream>

using namespace std;

int birthdayCakeCandles(int candles[], int n) {

    int maxHeight = INT_MIN;
    int count = 0;

    for (int i=0; i<n; i++) {

        if (candles[i]>=maxHeight) {

            maxHeight = candles[i];
        }
    }

    for (int i=0; i<n; i++) {

        if (candles[i]==maxHeight) {

            count++;
        }
    }

    return count;
}

int main() {

    int n;

    cin >> n;

    int candles[n];

    for (int i=0; i<n; i++) {

        cin >> candles[i];
    }

    cout << birthdayCakeCandles(candles, n);

    return 0;
}
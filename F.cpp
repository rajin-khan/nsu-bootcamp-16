#include<iostream>
#include<iomanip>

using namespace std;

void plusMinus(int* arr) {

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << n << endl;

    double pos, neg, zero = 0;
    double posrat, negrat, zerorat;

    for (int i=0; i<n; i++) {

        if (arr[i]>0) {

            pos++;
        }
        else if (arr[i]<0) {

            neg++;
        }
        else {

            zero++;
        }
    }

    posrat = (pos/(double)n);
    negrat = (neg/(double)n);
    zerorat = (zero/(double)n);

    cout << fixed << setprecision(6) << posrat << endl;
    cout << fixed << setprecision(6) << negrat << endl;
    cout << fixed << setprecision(6) << zerorat << endl;
}

int main() {

    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}
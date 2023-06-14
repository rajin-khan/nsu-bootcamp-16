#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int n, primDiag = 0, seconDiag = 0, diff = 0;

    cin >> n;

    int arr[n][n];

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            if (i==j) {

                primDiag+=arr[i][j];
            }
            if (i+j==n-1) {

                seconDiag+=arr[i][j];
            }
        }
    }

    cout << abs(primDiag-seconDiag);

    return 0;
}
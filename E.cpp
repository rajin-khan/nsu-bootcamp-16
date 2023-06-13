#include<iostream>
#include<cmath>

using namespace std;

int diagonalDifference(int** arr, int n) {

    int primaryDiagonal = 0, secondaryDiagonal = 0;

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            if (i==j) {

                primaryDiagonal+=arr[i][j];
            }
            else if ((i+j)==(n-1)) {

                secondaryDiagonal+=arr[i][j];
            }
        }
    }

    return abs(primaryDiagonal-secondaryDiagonal);

}

int main() {

    int n;

    cin >> n;

    int** arr = new int* [n];

    for (int i=0; i<n; i++) {

        arr[i] = new int[n];
    }

    for (int i=0; i<n; i++) {

        for (int j=0; j<n; j++) {

            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr, n);

    return 0;
}
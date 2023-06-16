#include<iostream>

using namespace std;

int main() {

    int T, A, B, C;

    cin >> T;

    int arr[T][3];

    for (int i=0; i<T; i++) {

        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for (int i=0; i<T; i++) {

        if ((arr[i][0]+arr[i][1]+arr[i][2])==180) {

            cout << "YES" << endl;
        }
        else {

            cout << "NO" << endl;
        }
    }

    return 0;
}
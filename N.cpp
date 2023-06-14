#include<iostream>
using namespace std;

int main() {

    int T, A, B, C, maxNo, minNo;

    cin >> T;

    int arr[T];

    for (int i=0; i<T; i++) {

        cin >> A >> B >> C;

        maxNo = max(A, max(B, C));
        minNo = min(A, min(B, C));

        arr[i] = A+B+C - maxNo - minNo;
    }

    cout << endl;

    for (int i = 0; i < T; i++) {

        cout << arr[i] << endl;
    }

    return 0;
}

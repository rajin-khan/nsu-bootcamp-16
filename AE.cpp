#include<iostream>

using namespace std;

int fact(int N) {

    if (N==0) {

        return 1;
    }
    else {

        return N*fact(N-1);
    }
}

int main() {

    int T, N;

    cin >> T;

    int arr[T];

    for (int i=0; i<T; i++) {

        cin >> N;
        arr[i]=fact(N);
    }

    for (int i=0; i<T; i++) {

        cout << arr[i] << endl;
    }

    return 0;
}
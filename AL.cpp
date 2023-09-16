#include<iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, count = 0;

    cin >> N >> K;

    int A[N];

    for (int i=0; i<N; i++) {

        cin >> A[i];
    }

    for (int i=0; i<N; i++) {

        if (A[i]%K==0) {

            count++;
        }
    }

    cout << count;

    return 0;
}
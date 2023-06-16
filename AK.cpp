#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maximum = INT_MIN, S = 0;

    cin >> n;

    int* a = new int[n];

    for (int i=0; i<n; i++) {

        cin >> a[i];
        maximum = max(maximum, a[i]);
    }

    for (int i=0; i<n; i++) {

        while (a[i] != maximum) {

            a[i]++;
            S++;
        }
    }

    cout << S;

    delete[] a;

    return 0;
}

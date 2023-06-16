#include<iostream>

using namespace std;

int gcd(int A, int B) {

    int gcd, i, max;

    i = max = A>B ? A:B;

    for (i=max; i>=1; i--)
    {
        if (((A%i)==0)&&((B%i)==0))
        {
            gcd = i;
            break;
        }
    }

    return gcd;
}

int lcm(int A, int B) {

    int lcm;

    lcm = (A*B)/gcd(A, B);

    return lcm;
}

int main() {

    int T, A, B;

    cin >> T;

    int arr[T][2];
    int ans[T][2];

    for (int i=0; i<T; i++) {

        for (int j=0; j<2; j++) {

            cin >> arr[i][j];
        }
    }

    for (int i=0; i<T; i++) {

        A = arr[i][0];
        B = arr[i][1];

        ans[i][0] = gcd(A, B);
        ans[i][1] = lcm(A, B);
    }

    for (int i=0; i<T; i++) {

        for (int j=0; j<2; j++) {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
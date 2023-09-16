#include <iostream>

using namespace std;

int gcd(int A, int B) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

int main() {
    
    int n;

    cin >> n;

    for (int a=n/2; a>=1; a--) {

        if (gcd(n, a) == 1) {

            int b = n - a;
            cout << a << " " << b << endl;
            break;
        }
    }

    return 0;
}

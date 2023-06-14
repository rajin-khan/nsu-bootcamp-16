/*
n = friends
k = bottles
l = milliliters of the drink.
c = limes
d = slices
p = salt.

To make a toast
nl = milliliters of the drink
a slice of lime 
np = grams of salt
*/

#include <iostream>

using namespace std;

int main() {

    int n, k, l, c, d, p, nl, np, tdrink, tlime, tsalt, toasts, ans;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    tdrink = (k*l)/nl;
    tlime = c*d;
    tsalt = p/np;

    toasts = min(tdrink, min(tlime, tsalt));
    ans = toasts/n;

    cout << ans << endl;

    return 0;
}

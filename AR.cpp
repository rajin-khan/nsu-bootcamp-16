#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, quantity, price;

    double payable, discount;

    cin >> T;

    int order[T][2];

    for (int i=0; i<T; i++) {

        cin >> order[i][0] >> order[i][1];
    }

    for (int i=0; i<T; i++) {

        if (order[i][0]>=1000) {

            discount = 0.10;
        }
        else {

            discount = 0;
        }

        payable = (order[i][0]*order[i][1]) - discount*(order[i][0]*order[i][1]);
        cout << fixed << setprecision(6) << payable << endl;
    }

    return 0;
}
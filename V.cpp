#include <iostream>

using namespace std;

int minMoves(long long int n) {

    int moves = 0;

    while (n!=1) {
        
        if (n%2==0) {

            n = n/2;
        }
        else if (n%3==0) {

            n = 2*n/3;
        }
        else if (n%5==0) {

            n = 4*n/5;
        }
        else {

            return -1;
        }

        moves++;
    }

    return moves;
}

int main() {

    int q,moves;

    cin >> q;

    long long int query[q];

    for (int i=0; i<q; i++) {

        cin >> query[i];
    }

    for (int i=0; i<q; i++) {

        moves = minMoves(query[i]);

        cout << moves << endl;
    }

    return 0;
}
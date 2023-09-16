#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int A, B, K;

    cin >> A >> B;
    
    bool poss=false;

    for (K=1; K<=1000000000; K++) {

        if (abs(A-K)==abs(B-K)) {

            poss = true;
            break;
        }
    }

    if (poss==true) {

        cout << K;
    }
    else {

        cout << "IMPOSSIBLE";
    }

    return 0;
}
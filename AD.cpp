#include<iostream>

using namespace std;

int main() {

    int N, revnum = 0;

    cin >> N;

    while (N!=0) {

        revnum = revnum*10 + N%10;
        N/=10;
    }

    cout << revnum;

    return 0;
}
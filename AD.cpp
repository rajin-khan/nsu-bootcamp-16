#include <iostream>

using namespace std;

long long reverse(long long num) {

    long long rev = 0;

    while (num!=0) {

        rev = rev*10 + num%10;
        num/=10;
    }

    return rev;
}

int main() {

    long long N;

    cin >> N;

    long long rev = reverse(N);

    cout << rev << endl;
    return 0;
}

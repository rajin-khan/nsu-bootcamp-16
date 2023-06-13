#include<iostream>

using namespace std;

int main() {

    int size;
    long long int input, sum = 0;

    cin >> size;

    long long int arr[size];

    for (int i=0; i<size; i++) {

        cin >> arr[i];
        sum+=arr[i];
    }

    cout << sum;

    return 0;
}
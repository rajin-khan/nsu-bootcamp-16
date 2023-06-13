#include<iostream>

using namespace std;

void miniMaxSum(int arr[5]) {

    long long minSum = LLONG_MAX;
    long long maxSum = LLONG_MIN;

    for (int i=0; i<5; i++) {

        long long sum = 0;

        for (int j=0; j<5; j++) {

            if (j!=i) {

                sum += arr[j];
            }
        }

        minSum = min(sum, minSum);
        maxSum = max(sum, maxSum);
    }

    cout << minSum << " " << maxSum;
    
}

int main() {

    int arr[5];

    for (int i=0; i<5; i++) {

        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}
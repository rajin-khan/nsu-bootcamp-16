#include <iostream>
#include <climits>

using namespace std;

int smallestSum(int arr[], int n) {

    int smallest = INT_MAX, secSmallest = INT_MAX;

    for (int i=0; i<n; i++) {

        if (arr[i]<=smallest) {

            secSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]<secSmallest) {

            secSmallest = arr[i];
        }
    }

    return smallest+secSmallest;
}

int main() {

    int T;
    cin >> T;

    for (int t=0; t<T; t++) {

        int N;
        cin >> N;

        int* arr = new int[N];

        for (int i=0; i<N; i++) {

            cin >> arr[i];
        }

        int result = smallestSum(arr, N);
        cout << result << endl;

        delete[] arr;
    }

    return 0;
}

#include <iostream>
#include<algorithm>
#include<utility>

using namespace std;

bool oneSwapSort(int arr[], int N) {

    int firstSwapIndex = -1;
    int secondSwapIndex = -1;

    for (int i=0; i<N-1; i++) {

        if (arr[i] > arr[i+1]) {

            if (firstSwapIndex==-1) {

                firstSwapIndex=i;
            } 
            else if (secondSwapIndex==-1) {

                secondSwapIndex=i;
            } 
            else {

                return false; // More than two swaps needed
            }
        }
    }

    if (firstSwapIndex==-1 && secondSwapIndex==-1) {

        return true;
    }

    if (secondSwapIndex==-1) {

        swap(arr[firstSwapIndex], arr[firstSwapIndex+1]);

        return is_sorted(arr, arr + N);
    }

    swap(arr[firstSwapIndex], arr[secondSwapIndex+1]);

    return is_sorted(arr, arr+N);
}

int main() {

    int N;
    cin >> N;

    int arr[N];

    for (int i=0; i<N; i++) {

        cin >> arr[i];
    }

    if (oneSwapSort(arr, N)) {

        cout << "YES";
    } 
    else {

        cout << "NO";
    }

    return 0;
}

#include<iostream>

using namespace std;

int main() {

    int size, even = 0, odd = 0;;

    cin >> size;

    int arr[size];

    for (int i=0; i<size; i++) {

        cin >> arr[i];
    }

    for (int i=0; i<size; i++) {

        if (arr[i]%2==0) {

            even++;
        }
        else {

            odd++;
        }
    }

    if (even>odd) {

        for (int i=0; i<size; i++) {

            if (arr[i]%2!=0) {

                cout << i+1 << " ";
            }
        }
    }
    else if (odd>even) {

        for (int i=0; i<size; i++) {

            if (arr[i]%2==0) {

                cout << i+1 << " ";
            }
        }
    }

    return 0;
}
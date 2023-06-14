#include<iostream>

using namespace std;

int main() {

    int t;

    cin >> t;

    int arr[t*2];

    for (int i=0; i<t*2; i++) {

        cin >> arr[i];
    }

    for (int i=0; i<t*2; i+=2) {

        if (arr[i]>arr[i+1]) {

            cout << ">" << endl;
        }
        else if (arr[i]<arr[i+1]) {

            cout << "<" << endl;
        }
        else if (arr[i]==arr[i+1]) {

            cout << "=" << endl;
        }
    }

    return 0;
}
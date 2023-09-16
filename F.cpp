#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int n;
    double total, pos = 0, neg = 0, zer = 0;

    cin >> n;
    
    int arr[n];

    total = n;

    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {

        if (arr[i]>0) {

            pos++;
        }
        else if (arr[i]<0) {

            neg++;
        }
        else if (arr[i]==0) {

            zer++;
        }
    }

    cout << fixed << setprecision(6) << pos/total << endl << neg/total << endl << zer/total;

    return 0;
}
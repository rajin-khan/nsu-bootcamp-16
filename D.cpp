#include<iostream>

using namespace std;

int* compareTriplets(int a[3], int b[3]) {

    int* arr = new int[2];
    int aPoints = 0, bPoints = 0;

    for (int i=0; i<3; i++) {

        if (a[i]>b[i]) {

            aPoints++;
        }
        else if (a[i]<b[i]) {

            bPoints++;
        }
        else {

            continue;
        }
    }

    arr[0] = aPoints;
    arr[1] = bPoints;

    return arr;
}

int main() {

    int a[3];
    int b[3];

    for (int i=0; i<3; i++) {

        cin >> a[i];
    }

    for (int i=0; i<3; i++) {

        cin >> b[i];
    }

    int* ans = compareTriplets(a, b);

    for (int i=0; i<2; i++) {

        cout << ans[i] << " ";
    }

    return 0;
}
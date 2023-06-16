#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int x, y, z;
    int sumX = 0, sumY = 0, sumZ = 0;

    for (int i=0; i<n; i++) {

        cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX==0 && sumY==0 && sumZ==0) {

        cout << "YES";
    } 
    else {

        cout << "NO";
    }

    return 0;
}
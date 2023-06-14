#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int T, len;

    double rad, gArea, rArea;

    cin >> T;

    while (T--) {

        cin >> len;

        rad = len*0.2;
        rArea = M_PI*rad*rad;
        gArea = len*(0.6*len)-rArea;

        cout << fixed << setprecision(2) << rArea << " " << gArea << endl;
    }

    return 0;
}

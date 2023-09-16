#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string t1, t2;

    int hr1, min1, hr2, min2, hr3, min3, mint;

    cin >> t1 >> t2;

    hr1 = stoi(t1.substr(0, 2));
    min1 = stoi(t1.substr(3, 2));
    hr2 = stoi(t2.substr(0, 2));
    min2 = stoi(t2.substr(3, 2));

    mint = ((hr2*60+min2)-(hr1*60+min1))/2;

    hr3 = (hr1*60+min1+mint)/60;
    min3 = (hr1*60+min1+mint)%60;

    cout << setfill('0') << setw(2) << hr3 << ":" << setw(2) << min3 << endl;

    return 0;
}

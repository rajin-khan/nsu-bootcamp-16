#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputTime;
    cout << "Enter a time in 12-hour format (hh:mm:ssAM/PM): ";
    cin >> inputTime;

    bool convertedTime = (inputTime.substr(8, 2)=="AM");

    cout << "Converted time in 24-hour format: " << convertedTime << endl;

    return 0;
}

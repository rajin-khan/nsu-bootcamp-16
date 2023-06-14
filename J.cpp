#include<iostream>
#include<string>

using namespace std;

string timeConversion(string s) {

    string time, output;

    int hrs, mins, sec;

    hrs = stoi(s.substr(0, 2));
    mins = stoi(s.substr(3, 2));
    sec = stoi(s.substr(6, 2));
    time = s.substr(8, 2);

    if (time=="PM" && hrs!=12) {

        hrs += 12;
    } 
    else if (time=="AM" && hrs==12) {

        hrs = 0;
    }

    output = (hrs<10 ? "0":"") + to_string(hrs) + ":" + (mins<10 ? "0":"") + to_string(mins) + ":" + (sec<10 ? "0":"") + to_string(sec);

    return output;
}

int main() {

    string normalTime;

    cin >> normalTime;

    cout << timeConversion(normalTime);

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int dayPages[7];

    for (int i=0; i<7; i++) {

        cin >> dayPages[i];
    }

    int pagesLeft = n;
    int day = 0;

    while (pagesLeft>0) {

        pagesLeft-=dayPages[day];
        day = (day+1) % 7;
    }

    if (day == 0) {

        day = 7;
    }

    cout << day << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int stepCount(int init[2], int end[2]) {

    int steps = max(abs(init[0] - end[0]), abs(init[1] - end[1]));

    return steps;
}

int main() {

    int init[2], end[2];

    cin >> init[0] >> init[1] >> end[0] >> end[1];

    cout << stepCount(init, end);

    return 0;
}

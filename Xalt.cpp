#include<iostream>

using namespace std;

int stepCount(int init[2], int end[2]) {

    int steps = 0;

    bool reached = false;

    while(!reached) {

        if (init[0]>end[0]) {

            init[0]--;
        }
        else if (init[0]<end[0]) {

            init[0]++;
        }
        if (init[1]>end[1]) {

            init[1]--;
        }
        else if (init[1]<end[1]) {

            init[1]++;
        }
        steps++;

        if (init[0]==end[0] && init[1]==end[1]) {

            reached = true;
        }
        
    }

    return steps;
}

int main() {

    int init[2], end[2];

    cin >> init[0] >> init[1] >> end[0] >> end[1];

    cout << stepCount(init, end);

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, count=0;

    vector<vector<int>> triangleDims;

    while (true) {

        cin >> a >> b >> c;

        if (a==0 && b==0 && c==0) {

            break;
        }
        else {

            triangleDims.push_back({a, b, c});
        }
    }

    for (int i=0; i<triangleDims.size(); i++) {

        a = triangleDims[i][0];
        b = triangleDims[i][1];
        c = triangleDims[i][2];

        if ((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a)) {

            cout << "right" << endl;
        }
        else {

            cout << "wrong" << endl;
        }
    }

    return 0;
}
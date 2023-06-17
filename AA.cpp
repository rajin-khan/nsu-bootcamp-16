#include<iostream>
#include<string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;

    cin >> N;

    cin.ignore();

    string slogan1[N], slogan2[N];

    for (int i=0; i<N; i++) {

        getline(cin, slogan1[i]);
        getline(cin, slogan2[i]);
    }

    cin >> Q;
    cin.ignore();

    string princess[Q];

    for (int i=0; i<Q; i++) {

        getline(cin, princess[i]);
    }

    for (int i=0; i<Q; i++) {

        for (int j=0; j<N; j++) {

            if (princess[i]==slogan1[j]) {

                cout << slogan2[j] << endl;
            }
        }
    }

    return 0;
}
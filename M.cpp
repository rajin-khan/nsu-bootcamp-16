#include<iostream>

using namespace std;

int main() {

    const int MAX_SIZE = 100;
    int count = 0;

    string input = "";

    string arr[MAX_SIZE];

    cin >> input;

    while (input!="*") {

        arr[count]=input;
        cin >> input;
        count++;
    }

    for (int i=0; i<=count; i++) {

        if (arr[i]=="Hajj") {

            cout << "Case " << i+1 << ": Hajj-e-Akbar" << endl;
        }
        else if (arr[i]=="Umrah") {

            cout << "Case " << i+1 << ": Hajj-e-Asghar" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

string getShipClass(char id) {

    switch (id) {
        
        case 'B':
            return "BattleShip";
        case 'b':
            return "BattleShip";
        case 'C':
            return "Cruiser";
        case 'c':
            return "Cruiser";
        case 'D':
            return "Destroyer";
        case 'd':
            return "Destroyer";
        case 'F':
            return "Frigate";
        case 'f':
            return "Frigate";
        default:
            return "Invalid ID";
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    cin >> T;

    char id[T];

    for (int i=0; i<T; i++) {

        cin >> id[i];      
    }

    for (int i=0; i<T; i++) {

        string shipClass = getShipClass(id[i]);
        cout << shipClass << endl;  
    }

    return 0;
}

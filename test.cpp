#include <iostream>
using namespace std;

// Driver Code
int main()
{

    int arr[100];

    arr[0] = 1;
    arr[1] = 2;

    int count = 0;
	
    for (int i=0; i<100; i++) {

        if (arr[i]!='\0') {

            count++;
        }
    }

    cout << count << endl;


	return 0;
}

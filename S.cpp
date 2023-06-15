#include <iostream>

using namespace std;

void mySwap(int& num1, int& num2) {

    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int getIndexMin(int arr[], int start, int end) {

    int indexMin = start;

    for (int index=start+1; index<=end; index++) {

        if (arr[index]<arr[indexMin]) {
            
            indexMin=index;
        }
    }

    return indexMin;
}

void selectionSort(int arr[], int total, int& swapCount) {

    swapCount=0;
    int end=total-1;
    int min;

    for (int current=0; current<end; current++) {

        min = getIndexMin(arr, current, end);

        int temp1 = arr[current], temp2 = arr[min];

        mySwap(arr[current], arr[min]);

        if (temp1==arr[current] && temp2==arr[min]) {
            
            swapCount++;
        }
    }
}

int main() {

    int N, swapCount = 0;

    cin >> N;

    int arr[N];

    for (int i=0; i<N; i++) {

        cin >> arr[i];
    }

    selectionSort(arr, N, swapCount);

    if (swapCount<=1) {

        cout << "YES";
    } 
    else {

        cout << "NO";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < 7; i++) {
        if (arr[i-1] - arr[i] != arr[i] - arr[i+1]) {
            cout << "mixed";
            return 0;
        }
    }
    if (arr[0] - arr[1] == -1) {
        cout << "ascending";
    } else if (arr[0] - arr[1] == 1) {
        cout << "descending";
    }
    return 0;
}

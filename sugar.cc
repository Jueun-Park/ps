#include <iostream>
using namespace std;

int n;
int arr[5001];

int main()
{
    for (int i = 0; i < 5001; i++) {
        arr[i] = -1;
    }
    arr[3] = 1;
    arr[5] = 1;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        if (arr[i-3] > 0 && arr[i-5] > 0) arr[i] = min(arr[i-3] + 1, arr[i-5] + 1);
        else if (arr[i-3] > 0) arr[i] = arr[i-3] + 1;
        else if (arr[i-5] > 0) arr[i] = arr[i-5] + 1;

    }
    cout << arr[n];
    return 0;
}

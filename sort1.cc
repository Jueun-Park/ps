#include <iostream>
using namespace std;

int arr[1001];

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[i]) swap(arr[j], arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}

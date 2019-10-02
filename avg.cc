#include<iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    float* arr = new float[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    float sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = (arr[i] / max) * 100;
        sum += arr[i];
    }
    cout << sum / n;
    delete[] arr;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int a, max = 0, max_i;
    for (int i = 0; i < 9; i++) {
        cin >> a;
        if (a > max) {
            max = a;
            max_i = i;
        }
    }
    cout << max << "\n" << max_i;
    return 0;
}
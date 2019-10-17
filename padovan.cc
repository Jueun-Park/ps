#include <iostream>
using namespace std;

long long int padovan[102];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, n;
    padovan[1] = 1;
    padovan[2] = 1;
    padovan[3] = 1;
    padovan[4] = 2;
    padovan[5] = 2;
    for (int i = 6; i <= 100; i++) {
        padovan[i] = padovan[i-1] + padovan[i-5];
    }

    cin >> t;
    for (int test = 0; test < t; test++) {
        cin >> n;
        cout << padovan[n] << "\n";
    }
    return 0;
}

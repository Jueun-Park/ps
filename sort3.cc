#include <iostream>
using namespace std;

int count[10002];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        count[a]++;
    }
    
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << "\n";
        }
    }
    return 0;
}

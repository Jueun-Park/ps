#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, ans = 0;

int main()
{
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            ans += arr[j];
        }
    }
    cout << ans;
    return 0;
}

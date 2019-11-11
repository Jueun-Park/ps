#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, ans = 0, tmp;

int main()
{
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        tmp = arr[i] * (i+1);
        if (tmp >= ans) ans = tmp;
    }
    
    cout << ans;
    
    return 0;
}

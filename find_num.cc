#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a;
int mid;
int start, endd, ans;

// bool bs(vector<int> arr, int x, int start, int end)
// {
//     while (start <= end) {
//         mid = (start + end) / 2;
//         if (x > arr[mid]) {
//             start = mid + 1;
//         } else if (x < arr[mid]) {
//             end = mid - 1;
//         } else {
//             return true;
//         }
//     }
//     return false;
// }

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    vector<int> nrr(n);
    for (int i = 0; i < n; i++) {
        cin >> nrr[i];
    }
    sort(nrr.begin(), nrr.end());
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        start = 0;
        endd = n-1;
        // cout << bs(nrr, a, 0, n-1) << "\n";  // TIME OUT
        // cout << binary_search(nrr.begin(), nrr.end(), a) << "\n";  // OK
        ans = 0;     
        while (start <= endd) {
            mid = (start + endd) / 2;
            if (a > nrr[mid]) {
                start = mid + 1;
            } else if (a < nrr[mid]) {
                endd = mid - 1;
            } else {
                ans = 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

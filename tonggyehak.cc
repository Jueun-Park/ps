#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[500001];

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);

    int mode = arr[0], count = 1, max_count = 0;
    int curr_num = arr[0];
    bool is_second = false;
    for (int i = 1; i <= n; i++) {
        if (i != n && arr[i] == curr_num) count++;
        else {
            if (count > max_count) {
                max_count = count;
                mode = curr_num;
                is_second = true;
            } else if (count == max_count) {
                if (is_second) {
                    mode = curr_num;
                    is_second = false;
                }
            }
            if (i != n) curr_num = arr[i];
            count = 1;
        }
    }
    float mean = sum/(float)n;
    cout << round(mean) << "\n";
    cout << arr[n/2] << "\n";
    cout << mode << "\n";
    cout << arr[n-1] - arr[0];

    return 0;
}

#include <iostream>
using namespace std;

int arr[1000001];

void merge(int start, int center, int end, int len)
{
    int* tarr = new int[len]();
    int left = start;
    int right = center;
    for (int i = 0; i < len; i++) {
        if (left == center) tarr[i] = arr[right++];
        else if (right == end+1) tarr[i] = arr[left++];
        else {
            if (arr[left] < arr[right]) tarr[i] = arr[left++];
            else tarr[i] = arr[right++];
        }
    }
    int i = start, j = 0;
    while (true) {
        if (i > end) break;
        arr[i++] = tarr[j++];
    }
    delete[] tarr;
    return;
}

void merge_sort(int start, int end)
{
    int len = end - start + 1;
    if (len <= 1) return;
    int center = start + len/2;
    merge_sort(start, center-1);
    merge_sort(center, end);
    merge(start, center, end, len);
    return;
}

int main()
{
    // parse
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // solve
    merge_sort(0, n-1);
    // result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}

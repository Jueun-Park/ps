#include <iostream>
#include <algorithm>

using namespace std;

int array[11];

bool descending(int a, int b)
{
    return a > b;
}

int main()
{
    int n, i = 0;
    cin >> n;
    while (n > 0) {
        array[i++] = n % 10;
        n /= 10;
    }
    sort(array, array + i, descending);
    for (int j = 0; j < i; j++) {
        cout << array[j];
    }
    return 0;
}

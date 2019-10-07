#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        ans += int(s[i]) - int('0');
    }
    cout << ans;
    return 0;
}

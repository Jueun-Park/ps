#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s, w;
    int ans = 0;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> w) {
        ans++;
    }
    cout << ans;
    return 0;
}

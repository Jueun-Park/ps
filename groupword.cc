#include <iostream>
#include <string>
using namespace std;


bool is_group_word(string s)
{
    bool check[26] = {false, };
    char prev = '0';
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != prev) {
            if (!check[s[i] - 'a']) check[s[i] - 'a'] = true;
            else return false;
        }
        prev = s[i];
    }
    return true;
}


int main() {
    string s;
    int n, ans = 0;
    cin >> n;
    cin.ignore();
    for (int test = 0; test < n; test++) {
        getline(cin, s);
        if (s.length() < 2) ans++;
        else {
            if (is_group_word(s)) ans++;
            else continue;
        }
    }
    cout << ans;
    return 0;
}

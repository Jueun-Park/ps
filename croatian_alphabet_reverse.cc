#include <iostream>
#include <string>
using namespace std;

int croatian(string& s, int index)
{
    if (index == 0) return 1;
    char c = s[index];
    switch(c) {
        case '=':
            if (s[index-1] == 'z' && s[index-2] == 'd') return 3;
            if (s[index-1] == 'c' || s[index-1] == 's' || s[index-1] == 'z') return 2;
        case '-':
            if (s[index-1] == 'c' || s[index-1] == 'd') return 2;
        case 'j':
            if (s[index-1] == 'l' || s[index-1] == 'n') return 2;
        default:
            return 1;
    }
}

int main()
{
    int ans = 0, moving = 1;
    string s;
    string& rs = s;
    getline(cin, s);
    for (int i = s.length()-1; i > -1; i -= moving) {
        moving = croatian(rs, i);
        ans++;
    }
    cout << ans;

    return 0;
}

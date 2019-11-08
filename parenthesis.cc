#include <iostream>
#include <stack>
using namespace std;

int t;
string s;
bool is_vps;

int main()
{
    cin >> t;
    for (int test = 0; test < t; test++) {
        cin >> s;
        is_vps = true;
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    is_vps = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        if (!st.empty()) is_vps = false;
        if (is_vps) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }    
    return 0;
}

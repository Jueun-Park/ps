#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int t, r;
    string inp;
    string s;
    cin >> t;
    cin.ignore();
    for (int test = 0; test < t; test++) {
        getline(cin, inp);
        stringstream ss(inp);
        ss >> r >> s;

        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < r; j++) {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}

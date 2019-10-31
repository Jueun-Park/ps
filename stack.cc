#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, data;
    string cmd;
    stack<int> sta;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> data;
            sta.push(data);
        } else if (cmd == "pop") {
            if (sta.empty()) {
                cout << -1 << "\n";
            } else {
                cout << sta.top() << "\n";
                sta.pop();
            }
        } else if (cmd == "size") {
            cout << sta.size() << "\n";
        } else if (cmd == "empty") {
            if (sta.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (cmd == "top") {
            if (sta.empty()) cout << -1 << "\n";
            else cout << sta.top() << "\n";
        }
    }
    return 0;
}

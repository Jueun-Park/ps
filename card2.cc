#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i < n+1; i++) {
        q.push(i);
    }
    if (q.size() == 1) {
        cout << q.front();
        return 0;
    }
    while (true) {
        q.pop();
        if (q.size() == 1) {
            cout << q.front();
            break;
        }
        q.push(q.front());
        q.pop();
    }
    return 0;
}

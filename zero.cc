#include <iostream>
#include <stack>
using namespace std;

int k, a, ans = 0;
stack<int> st;

int main()
{
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        if (a == 0) st.pop();
        else st.push(a);
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}

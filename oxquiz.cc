#include<iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t, score, num_continuous_o;
    cin >> t;
    string a;
    for (int i = 0; i < t; i++) {
        cin >> a;
        score = 0;
        num_continuous_o = 0;
        for (int j = 0; j < a.length(); j++) {
            if (a[j] == 'O') {
                score += ++num_continuous_o;
            } else if (a[j] == 'X') {
                num_continuous_o = 0;
            }
        }
        cout << score << "\n";
    }
    return 0;
}

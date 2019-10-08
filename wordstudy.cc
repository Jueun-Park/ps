#include <iostream>
#include <string>
using namespace std;

int main()
{
    string w;
    getline(cin, w);
    int check[26] = {0, };
    for (int i = 0; i < w.length(); i++) {
        if ('A' <= w[i] && w[i] <= 'Z') {
            check[w[i] - 'A']++;
        } else if ('a' <= w[i] && w[i] <= 'z') {
            check[w[i] - 'a']++;
        }
    }
    int max = 0;
    char ans;
    for (int i = 0; i < 26; i++) {
        if (check[i] > max) {
            max = check[i];
            ans = 'A' + i;
        } else if (check[i] == max && ans != 'A' + i) {
            ans = '?';
        }
    }
    cout << ans;
    return 0;
}

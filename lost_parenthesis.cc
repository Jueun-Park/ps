#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string inp;
string token;
vector<string> arr;
int ans;

int main()
{
    getline(cin, inp);
    stringstream ss(inp);
    while (getline(ss, token, '-')) {
        arr.push_back(token);
    }
    stringstream sss(arr[0]);
    while (getline(sss, token, '+')) {
        ans += stoi(token);
    }
    for (int i = 1; i < arr.size(); i++) {
        stringstream ss(arr[i]);
        while (getline(ss, token, '+')) {
            ans -= stoi(token);
        }
    }
    cout << ans;
    return 0;
}

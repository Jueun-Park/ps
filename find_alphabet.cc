#include <iostream>
#include <string>
using namespace std;

int main() {
    int index;
    string s;
    getline(cin, s);
    int count[26];
    for (int i = 0; i < 26; i++) {
        count[i] = -1;
    }
    for (int i = 0; i < s.length(); i++) {
        index = int(s[i]) - int('a');
        if (count[index] == -1) {
            count[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << count[i] << " ";
    }
    return 0;
}

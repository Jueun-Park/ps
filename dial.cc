#include <iostream>
#include <string>
using namespace std;


int char_to_number(char c)
{
    switch (c) {
        case 'A': case 'B': case 'C':
            return 2;
        case 'D': case 'E': case 'F':
            return 3;
        case 'G': case 'H': case 'I':
            return 4;
        case 'J': case 'K': case 'L':
            return 5;
        case 'M': case 'N': case 'O':
            return 6;
        case 'P': case 'Q': case 'R': case 'S':
            return 7;
        case 'T': case 'U': case 'V':
            return 8;
        case 'W': case 'X': case 'Y': case 'Z':
            return 9;
    }
    return 0;
}

int get_time_taken(int i)
{
    if (i != 0) return i + 1;
    else if (i == 0) return 11;
    return 0;
}

int main()
{
    int ans = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        ans += get_time_taken(char_to_number(s[i]));
    }
    cout << ans;
    return 0;
}

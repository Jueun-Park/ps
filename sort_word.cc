#include <iostream>
#include <algorithm>
using namespace std;

string array[20001];

bool condition(string a, string b)
{
    if (a.length() < b.length()) return true;
    else if (a.length() == b.length()) return a < b;
    else return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n, condition);
    string prevo;
    for (int i = 0; i < n; i++) {
        if (array[i] != prevo) cout << array[i] << "\n";
        prevo = array[i];
    }
    return 0;
}

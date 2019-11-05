#include <iostream>
using namespace std;

int a, b;

int main()
{
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a < b && b % a == 0) cout << "factor" << "\n";
        else if (b < a && a % b == 0) cout << "multiple" << "\n";
        else cout << "neither" << "\n";
    }
    return 0;
}

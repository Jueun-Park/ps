#include<iostream>
using namespace std;

int main()
{
    int answers[42] = {};
    int a;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        answers[a%42] += 1;
    }
    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (answers[i] > 0) {
            count += 1;
        }
    }
    cout << count;
    return 0;
}

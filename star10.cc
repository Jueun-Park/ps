#include <iostream>
using namespace std;

void print_stars(bool** stars, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (stars[i][j]) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

void star(bool** stars, int n, int i, int j)
{
    if (n == 1) {
        stars[i][j] = true;
        return;
    }
    else {
        int next = n/3;
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                if (y == 1 && x == 1) {
                    continue;
                } else {
                    star(stars, next, i + (y*next), j + (x*next));
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    bool** stars = new bool*[n];
    for (int i = 0; i < n; i++) {
        stars[i] = new bool[n];
        for (int j = 0; j < n; j++) {
            stars[i][j] = false;
        }
    }
    star(stars, n, 0, 0);
    print_stars(stars, n);
    return 0;
}

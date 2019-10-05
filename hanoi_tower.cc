#include <iostream>
#include <vector>
using namespace std;

int num_move = 0;

void hanoi(vector<vector<int>>& move, int n, int from, int by, int to)
{
    vector<int> v{from, to};
    if (n == 1) {
        move.push_back(v);
        num_move++;
    } else {
        hanoi(move, n-1, from, to, by);
        move.push_back(v);
        num_move++;
        hanoi(move, n-1, by, from, to);
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> move;
    vector<vector<int>>& rmove = move;
    hanoi(rmove, n, 1, 2, 3);
    cout << num_move << "\n";
    for (int i = 0; i < move.size(); i++) {
        cout << move[i][0] << " " << move[i][1] << "\n";
    }
    return 0;
}

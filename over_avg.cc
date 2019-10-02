#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c, n;
    float avg, num_students_over_avg;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n;
        float* scores = new float[n];
        avg = 0;
        for (int j = 0; j < n; j++) {
            cin >> scores[j];
            avg += scores[j];
        }
        avg /= n;
        num_students_over_avg = 0;
        for (int j = 0; j < n; j++) {
            if(scores[j] > avg) {
                num_students_over_avg++;
            }
        }
        cout << fixed << setprecision(3) << num_students_over_avg * 100 / n << "%\n";
    }
    return 0;
}

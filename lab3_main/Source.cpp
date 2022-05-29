#include <iostream>
#include <vector>
using namespace std;

const int N = 1;

double f(double x) {
    return N * pow(x, max(20 - N, N)) + (N + 2) * pow(x, max(20 - N, N) - 1) + (N - 3) * pow(x, max(20 - N, N) - 2);
}
void solve() {
    int numberOfDots = max(20 - N, N) - ((int)N % 3) - 1;
    for (int i = 0; i < numberOfDots; i++) {

        double r = 1;
        for (int j = 0; j < numberOfDots; j++) {
            if (i != j) {
                r *= i - j;
            }
        }
        cout << (f(i) / r);
        for (int j = 0; j < numberOfDots; j++) {
            if (i != j) {
                cout << " * (x - " << j << ")";
            }
        }
        if (i < numberOfDots - 1) {
            cout << "\n + ";
        }
    }
}

int main() {
    cout << "test\n";
    solve();
    return 0;
}
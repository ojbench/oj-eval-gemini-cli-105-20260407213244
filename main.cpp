#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
    
    int target = n - m;
    vector<double> E(n + 1, 0.0);
    double S = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        if (i <= target) {
            E[i] = 0.0;
        } else {
            E[i] = 1.0 + S / i;
        }
        S += E[i];
    }
    
    cout << fixed << setprecision(2) << E[n] << endl;
    return 0;
}

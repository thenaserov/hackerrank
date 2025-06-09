#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        /* Enter your code here */
      cout << left << showbase << hex << A << endl;
      cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
      cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
            
    }
    return 0;
}

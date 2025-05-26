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
        cout << hex << showbase << uppercase << A << endl;
        cout << fixed << setfill('_') << setw(15) << setprecision(2) << B << showpos << endl;
        cout << scientific << uppercase << C << endl;
            
    }
    return 0;
}

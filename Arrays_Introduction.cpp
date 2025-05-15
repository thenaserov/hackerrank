#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << numbers[i];
        if (i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}

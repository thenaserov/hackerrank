#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> vecs;
    for(int count = 0; count < n; count++){
        int x;
        cin >> x;
        vector<int> numbers(x);
        for (int i = 0; i < x; ++i) {
            cin >> numbers[i];
        }
        vecs.push_back(numbers);
    }
    vector<vector<int>> subs;
    for (int i = 0; i < n; i++){
        int q, p;
        cin >> q >> p;
        vector<int> tmp;
        tmp.push_back(q);
        tmp.push_back(p);
        subs.push_back(tmp);
    }
    
    for (int i = 0; i < subs.size(); i++){
        cout << vecs.at(i).at(subs.at(i).at(1)) << "\n";
    }
    
    return 0;
}

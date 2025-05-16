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
    for (int i = 0; i < q; i++){
        int q, p;
        cin >> q >> p;
        vector<int> tmp;
        tmp.push_back(q);
        tmp.push_back(p);
        subs.push_back(tmp);
    }
    
    vector<int> res;
    for (int i = 0; i < subs.size(); i++){
        res.push_back(vecs.at(subs.at(i).at(0)).at(subs.at(i).at(1)));
    }
    for (int i = 0; i < res.size(); i++){
        cout << res.at(i) << "\n";
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    map<string, int> scores;
    cin >> q;
    for (int i = 0; i < q; ++i){
        int type;
        string name;
        int score;
        cin >> type >> name;
        if (type == 1){
            cin >> score;
            map<string,int>::iterator itr=scores.find(name);
            if(itr != scores.end()) {
                scores[name] += score;
            } else {
                scores.insert(make_pair(name, score));
            }
            
        } else if (type == 2) {
            scores.erase(name);
        } else if (type == 3) {
            map<string,int>::iterator itr=scores.find(name);
            if(itr != scores.end()) {
                cout << scores[name] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}

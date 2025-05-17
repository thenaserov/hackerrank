#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> numbers;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        if (a == 1){
            numbers.insert(b);
        }
        else if(a == 2){
            numbers.erase(b);
        }
        else {
            set<int>::iterator itr=numbers.find(b);
            if (itr == numbers.end()){
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}





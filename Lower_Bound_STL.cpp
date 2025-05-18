#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int qn;
    cin >> qn;
    vector<int> que(qn);
    for (int i = 0; i < qn; i++){
        cin >> que[i];
    }
    for(int i = 0; i < qn; i++){
        for (int j = 0; j < vec.size(); j++){
            if(vec[j] == que[i]){
                cout << "Yes " << j+1 << endl;
                break;
            }
            else if (vec[j] > que[i]) {
                cout << "No " << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}

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
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    return 0;
}

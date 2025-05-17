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

    for (int i = 0;i < n; i++){
        cin >> numbers[i];
    }
    
    int x, a, b;
    
    cin >> x;
    cin >> a >> b;
    
    numbers.erase(numbers.begin()+x-1);
    if (a != 1)
        numbers.erase(numbers.begin()+a-1, numbers.begin()+b-1);
    else
        numbers.erase(numbers.begin(), numbers.begin()+b-1);

    cout << numbers.size() << endl;
    
    for (int i: numbers){
        cout << i << " ";
    }
    return 0;
}


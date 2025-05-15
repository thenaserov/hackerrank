#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    cin.ignore();
    if (n == 0)
        exit(1);

    vector<int> numbers;
    string input;
    getline(cin, input);
    stringstream ss(input);
    
    while (ss >> num && numbers.size() < n) {
        numbers.push_back(num);
    }
        
    for(int i = numbers.size() - 1; i >= 0; --i)
            cout << numbers[i] << " ";
  
    return 0;
}

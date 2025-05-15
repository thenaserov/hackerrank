#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n;
    long num;
    cin >> n;
    cin.ignore();

    vector<long> numbers;
    string input;
    getline(cin, input);
    stringstream ss(input);
    
    while (ss >> num)
        numbers.push_back(num);

    if (numbers.size() > n)
        numbers.resize(n);

    for (int i = numbers.size() - 1; i >= 0; --i)
        cout << numbers[i] << " ";
    
    return 0;
}


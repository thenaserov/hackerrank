#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, qn;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    cin >> qn;
    int query;
    for (int i = 0; i < qn; ++i) {
        cin >> query;
        auto it = lower_bound(vec.begin(), vec.end(), query);

        if (it != vec.end() && *it == query) {
            cout << "Yes " << (it - vec.begin() + 1) << endl;
        } else {
            cout << "No " << (it - vec.begin() + 1) << endl;
        }
    }

    return 0;
}





// my dumb code ->

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++){
//         cin >> vec[i];
//     }
//     int qn;
//     cin >> qn;
//     vector<int> que(qn);
//     for (int i = 0; i < qn; i++){
//         cin >> que[i];
//     }
//     for(int i = 0; i < qn; i++){
//         for (int j = 0; j < vec.size(); j++){
//             if(vec[j] == que[i]){
//                 cout << "Yes " << j+1 << endl;
//                 break;
//             }
//             else if (vec[j] > que[i]) {
//                 cout << "No " << j+1 << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }
